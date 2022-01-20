/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** destroy_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

void destroy_all(data_t *data)
{
    destroy_clock(data->duck);
    destroy_cursor(data->cursor);
    destroy_score(data->score);
    destroy_duck(data->duck);
    destroy_life(data->life);
    destroy_all_music(data->music);
    destroy_window(data->window);
    destroy_pause_and_text(data->pause, data->text);
    free(data->duck);
    free(data->cursor);
    free(data->life);
    free(data->score);
    free(data->window);
    free(data->pause);
    free(data->text);
    free(data);
    return;
}

void destroy_window(window_t *window)
{
    sfSprite_destroy(window->background);
    sfTexture_destroy(window->texture);
    sfSprite_destroy(window->sprite);
    sfTexture_destroy(window->texture_end);
    sfRenderWindow_destroy(window->render);
    return;
}

void destroy_duck(duck_t *duck)
{
    sfTexture_destroy(duck->texture);
    sfSprite_destroy(duck->duck_sprite);
    return;
}

void destroy_clock(duck_t *duck)
{
    sfClock_destroy(duck->clock1);
    sfClock_destroy(duck->clock2);
    return;
}

void destroy_cursor(cursor_t *cursor)
{
    sfSprite_destroy(cursor->sprite);
    sfTexture_destroy(cursor->texture);
    return;
}
