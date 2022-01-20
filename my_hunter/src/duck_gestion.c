/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** duck_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

float initialise_rand_pos(void)
{
    srand(time(NULL));
    float random_pos = (float)(rand() %800);
    return (random_pos);
}

duck_t *initialise_duck(void)
{
    duck_t *duck = malloc(sizeof(duck_t));

    if (duck == NULL)
        return (NULL);
    duck->size.top = 0;
    duck->size.left = 0;
    duck->size.width = 990;
    duck->size.height = 173;
    duck->random_position = initialise_rand_pos();
    duck->position.x = -150;
    duck->position.y = duck->random_position;
    duck->duck_sprite = sfSprite_create();
    duck->texture = sfTexture_createFromFile("image/bird.png", &duck->size);
    duck->clock1 = sfClock_create();
    duck->clock2 = sfClock_create();
    duck->speed = 30;
    duck->duck_killed = 0;
    duck->shoot = 0;
    initialize_duck2(duck);
    return (duck);
}

duck_t *move_rect(duck_t *duck)
{
    duck->size.width = 110;
    duck->size.left += 110;
    if (duck->size.left == 990)
        duck->size.left = 0;
    return (duck);
}

duck_t *advance_duck(duck_t *duck)
{
    duck->position.x += duck->speed;
    if (duck->position.x > 1920) {
        duck->position.x = -150;
        duck->position.y = initialise_rand_pos();
    }
    sfSprite_setPosition(duck->duck_sprite, duck->position);
    return (duck);
}

int move_duck_and_low_life(duck_t *duck, life_t *life, window_t *window)
{
    duck->time1 = sfClock_getElapsedTime(duck->clock1);
    duck->seconds1 = duck->time1.microseconds / 1000000.0;
    if (duck->seconds1 > 0.10) {
        move_rect(duck);
        advance_duck(duck);
        if (lose_life(duck, life, window) == 1)
            return (1);
        sfClock_restart(duck->clock1);
    }
    return (0);
}
