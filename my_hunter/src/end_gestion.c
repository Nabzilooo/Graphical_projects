/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** end_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

int end_game(data_t *data, sfEvent event)
{
    sfVector2f pos;

    pos = setting_end(pos, data);
    while (sfRenderWindow_isOpen(data->window->render)) {
        handle_end_events(data, event);
        display_end_window(data, pos);
    }
    destroy_all(data);
    return (0);
}

int exit_game(data_t *data, sfEvent event)
{
    if (event.mouseButton.x >= 675 && event.mouseButton.x <= 1224 &&
    event.mouseButton.y >= 822 && event.mouseButton.y <= 973)
        sfRenderWindow_close(data->window->render);
    return (0);
}

sfVector2f setting_end(sfVector2f pos, data_t *data)
{
    pos.x = 910;
    pos.y = 140;
    sfText_setPosition(data->score->text_score, pos);
    display_end_score(data->duck, data->score);
    sfRenderWindow_setMouseCursorVisible(data->window->render, sfTrue);
    return (pos);
}
