/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** display_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

void display_all(data_t *data)
{
    sfRenderWindow_clear(data->window->render, sfBlack);
    display_window_background(data->window);
    display_score(data->score, data->window);
    display_duck(data->window, data->duck);
    display_cursor(data->cursor, data->window);
    display_life(data->window, data->life);
    sfRenderWindow_display(data->window->render);
    return;
}

void display_window_background(window_t *window)
{
    sfRenderWindow_drawSprite(window->render, window->background, NULL);
    return;
}

void display_duck(window_t *window, duck_t *duck)
{
    duck->size.width = 110;
    sfSprite_setTextureRect(duck->duck_sprite, duck->size);
    sfRenderWindow_drawSprite(window->render, duck->duck_sprite, NULL);
    return;
}

void display_cursor(cursor_t *cursor, window_t *window)
{
    sfRenderWindow_setMouseCursorVisible(window->render, sfFalse);
    cursor->pos = sfMouse_getPositionRenderWindow(window->render);
    cursor->position.x = cursor->pos.x;
    cursor->position.y = cursor->pos.y;
    sfSprite_setPosition(cursor->sprite, cursor->position);
    sfRenderWindow_drawSprite(window->render, cursor->sprite, NULL);
    return;
}

void display_score(score_t *score, window_t *window)
{
    sfSprite_setTextureRect(score->score_sprite, score->rect);
    sfRenderWindow_drawSprite(window->render, score->score_sprite, NULL);
    sfText_setFont(score->text_score, score->font);
    sfText_setString(score->text_score, my_itoa(score->final_score));
    sfText_setCharacterSize(score->text_score, 45);
    sfText_setColor(score->text_score, sfBlack);
    sfText_setPosition(score->text_score, score->text_position);
    sfRenderWindow_drawText(window->render, score->text_score, NULL);
    return;
}
