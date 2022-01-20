/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** life_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

life_t *initialise_life(window_t *window)
{
    life_t *life = malloc(sizeof(life_t));

    if (life == NULL)
        return (NULL);
    life->life_rect.height = 40;
    life->life_rect.left = 0;
    life->life_rect.top = 0;
    life->life_rect.width = 990;
    life->life_pos.x = 0;
    life->life_pos.y = 0;
    life->life_sprite = sfSprite_create();
    life->texture = sfTexture_createFromFile("image/life.png",
    &life->life_rect);
    life->life_rect.width = 110;
    sfSprite_setTexture(life->life_sprite, life->texture, sfTrue);
    sfSprite_setTextureRect(life->life_sprite, life->life_rect);
    sfSprite_setPosition(life->life_sprite, life->life_pos);
    return (life);
}

int lose_life(duck_t *duck, life_t *life, window_t *window)
{
    if (duck->position.x > 1920 - duck->speed)
        life->life_rect.width -= 37;
    if (life->life_rect.width == -1)
        return (1);
    return (0);
}
