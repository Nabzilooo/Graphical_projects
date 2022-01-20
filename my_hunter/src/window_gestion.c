/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** window_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

window_t *create_window(void)
{
    window_t *window = malloc(sizeof(window_t));

    if (window == NULL)
        return (NULL);
    window->render = NULL;
    window->mode.width = 1920;
    window->mode.height = 1080;
    window->mode.bitsPerPixel = 32;
    window->render = sfRenderWindow_create(window->mode,
    "[GAME] My hunter", sfClose, NULL);
    window->background = sfSprite_create();
    window->texture = sfTexture_createFromFile("image/back.png", NULL);
    window->sprite = sfSprite_create();
    window->texture_end = sfTexture_createFromFile("image/end.png", NULL);
    sfSprite_setTexture(window->background, window->texture, sfTrue);
    sfSprite_setTexture(window->sprite, window->texture_end, sfTrue);
    sfRenderWindow_setFramerateLimit(window->render, 30);
    return (window);
}
