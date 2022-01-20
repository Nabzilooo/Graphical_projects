/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** interaction_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

void put_pause(sfEvent event, window_t *window, pause_t *pause, music_t *music)
{
    while (sfRenderWindow_isOpen(window->render)) {
        display_pause(pause, window);
        if (sfKeyboard_isKeyPressed(sfKeyR)) {
            sfMusic_setLoop(music->ambiance, sfTrue);
            sfMusic_play(music->ambiance);
            return;
        }
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(window->render);
    }
    return;
}

int ext_stop(sfEvent event, window_t *window, pause_t *pause, music_t *music)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        sfRenderWindow_close(window->render);
    if (sfKeyboard_isKeyPressed(sfKeyP)) {
        sfMusic_stop(music->ambiance);
        put_pause(event, window, pause, music);
    }
    return (0);
}

data_t *shoot_duck(data_t *data, sfEvent event)
{
    put_song_shoot(data->music);
    data->duck->shoot += 1;
    if (event.mouseButton.x >= data->duck->position.x &&
    event.mouseButton.x <= data->duck->position.x + data->duck->size.width &&
    event.mouseButton.y >= data->duck->position.y &&
    event.mouseButton.y <= data->duck->position.y + data->duck->size.height) {
        put_song_bird_killed(data->music);
        data->duck->position.x = -150;
        data->duck->position.y = initialise_rand_pos();
        data->score->final_score += 10;
        data->duck->duck_killed += 1;
        return (data);
    }
    if (data->score->final_score != 0)
        data->score->final_score -= 10;
    return (data);
}

int handle_events(data_t *data)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(data->window->render, &event)) {
        switch (event.type) {
            case sfEvtClosed:
            sfRenderWindow_close(data->window->render);
            break;
            case sfEvtMouseButtonPressed:
            shoot_duck(data, event);
            break;
            case sfEvtKeyPressed:
            ext_stop(event, data->window, data->pause, data->music);
            break;
        }
    }
    return (0);
}

int handle_end_events(data_t *data, sfEvent event)
{
    while (sfRenderWindow_pollEvent(data->window->render, &event)) {
        switch (event.type) {
            case sfEvtClosed:
            sfRenderWindow_close(data->window->render);
            break;
            case sfEvtMouseButtonPressed:
            exit_game(data, event);
            break;
            case sfEvtKeyPressed:
            ext_stop(event, data->window, data->pause, data->music);
            break;
        }
    }
    return (0);
}
