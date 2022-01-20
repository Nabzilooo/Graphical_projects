/*
** EPITECH PROJECT, 2021
** B-MUL-100-TLS-1-1-myhunter-adil.nouiri
** File description:
** display_gestion3.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

void disp_text2(text_t *text, window_t *window)
{
    sfText_setCharacterSize(text->bullet, 75);
    sfText_setColor(text->bullet, sfBlack);
    sfText_setPosition(text->bullet, text->bullet_position);
    sfRenderWindow_drawText(window->render, text->bullet, NULL);
    return;
}
