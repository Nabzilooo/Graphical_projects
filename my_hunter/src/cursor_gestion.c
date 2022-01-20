/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** cursor_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

cursor_t *initialise_cursor(window_t *window)
{
    cursor_t *cursor = malloc(sizeof(cursor_t));

    if (cursor == NULL)
        return (NULL);
    sfRenderWindow_setMouseCursorVisible(window->render, sfFalse);
    cursor->pos = sfMouse_getPositionRenderWindow(window->render);
    cursor->position.x = cursor->pos.x;
    cursor->position.y = cursor->pos.y;
    cursor->sprite = sfSprite_create();
    cursor->texture = sfTexture_createFromFile("image/cursor.png", NULL);
    sfSprite_setPosition(cursor->sprite, cursor->position);
    sfSprite_setTexture(cursor->sprite, cursor->texture, sfTrue);
    return (cursor);
}
