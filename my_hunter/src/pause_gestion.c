/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** pause_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

pause_t *initialize_pause(void)
{
    pause_t *pause = malloc(sizeof(pause_t));

    if (pause == NULL)
        return (NULL);
    pause->font = sfFont_createFromFile("fonts/azria.ttf");
    pause->position.x = 800;
    pause->position.y = 500;
    pause->text = sfText_create();
    sfText_setFont(pause->text, pause->font);
    return (pause);
}
