/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** duck_gestion2.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

duck_t *accelerate_duck(duck_t *duck)
{
    duck->time2 = sfClock_getElapsedTime(duck->clock2);
    duck->seconds2 = duck->time2.microseconds / 1000000.0;
    if (duck->seconds2 > 10.0) {
        duck->speed += 10;
        my_putstr("ok");
        sfClock_restart(duck->clock2);
    }
    return (duck);
}

duck_t *initialize_duck2(duck_t *duck)
{
    sfSprite_setTexture(duck->duck_sprite, duck->texture, sfTrue);
    sfSprite_setTextureRect(duck->duck_sprite, duck->size);
    sfSprite_setPosition(duck->duck_sprite, duck->position);
    return (duck);
}
