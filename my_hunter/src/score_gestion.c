/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** score_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

score_t *initialise_score(window_t *window)
{
    score_t *score = malloc(sizeof(score_t));

    if (score == NULL)
        return (NULL);
    score->str = NULL;
    score->final_score = 0;
    score->rect.height = 59;
    score->rect.left = 0;
    score->rect.top = 0;
    score->rect.width = 150;
    score->score_position.x = 1570;
    score->score_position.y = 970;
    score->score_sprite = sfSprite_create();
    score->texture = sfTexture_createFromFile("image/scor.png", &score->rect);
    score->font = sfFont_createFromFile("fonts/number.ttf");
    score->text_position.x = 1750;
    score->text_position.y = 970;
    score->text_score = sfText_create();
    initialize_score2(score);
    return (score);
}

score_t *initialize_score2(score_t *score)
{
    sfText_setFont(score->text_score, score->font);
    sfSprite_setTexture(score->score_sprite, score->texture, sfTrue);
    sfSprite_setTextureRect(score->score_sprite, score->rect);
    sfSprite_setPosition(score->score_sprite, score->score_position);
    return (score);
}
