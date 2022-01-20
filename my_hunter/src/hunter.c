/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** hunter.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

int my_hunter(void)
{
    data_t *data = initialise_data();
    sfEvent event;

    put_music_theme(data->music);
    while (sfRenderWindow_isOpen(data->window->render)) {
        handle_events(data);
        if (update_all(data) == 1) {
            end_game(data, event);
            return (0);
        }
        display_all(data);
    }
    destroy_all(data);
    return (0);
}
