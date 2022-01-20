/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** text_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

text_t *initialize_text(void)
{
    text_t *text = malloc(sizeof(text_t));

    if (text == NULL)
        return (NULL);
    text->str1 = NULL;
    text->str2 = NULL;
    text->bird_font = sfFont_createFromFile("fonts/number.ttf");
    text->bullet_font = sfFont_createFromFile("fonts/number.ttf");
    text->bird = sfText_create();
    text->bullet = sfText_create();
    text->bird_position.x = 910;
    text->bird_position.y = 350;
    text->bullet_position.x = 905;
    text->bullet_position.y = 575;
    sfText_setFont(text->bird, text->bird_font);
    sfText_setFont(text->bullet, text->bullet_font);
    return (text);
}
