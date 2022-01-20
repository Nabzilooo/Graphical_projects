/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** action_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

int update_all(data_t *data)
{
    accelerate_duck(data->duck);
    if (move_duck_and_low_life(data->duck, data->life, data->window) == 1)
        return (1);
    return (0);
}
