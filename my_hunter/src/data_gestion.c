/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** data_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

data_t *initialise_data(void)
{
    data_t *data = malloc(sizeof(data_t));

    if (data == NULL)
        return (NULL);
    data->window = create_window();
    data->duck = initialise_duck();
    data->cursor = initialise_cursor(data->window);
    data->score = initialise_score(data->window);
    data->life = initialise_life(data->window);
    data->pause = initialize_pause();
    data->music = initialize_music();
    data->text = initialize_text();
    return (data);
}
