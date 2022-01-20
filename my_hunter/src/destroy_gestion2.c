/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** destroy_gestion2.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

void destroy_life(life_t *life)
{
    sfSprite_destroy(life->life_sprite);
    sfTexture_destroy(life->texture);
    return;
}

void destroy_score(score_t *score)
{
    sfSprite_destroy(score->score_sprite);
    sfTexture_destroy(score->texture);
    sfText_destroy(score->text_score);
    sfFont_destroy(score->font);
    free(score->str);
    return;
}

void destroy_all_music(music_t *music)
{
    sfMusic_destroy(music->ambiance);
    sfSoundBuffer_destroy(music->killed_buffer);
    sfSound_destroy(music->killed);
    sfSoundBuffer_destroy(music->shoot_buffer);
    sfSound_destroy(music->shoot);
    return;
}

void destroy_pause_and_text(pause_t *pause, text_t *text)
{
    sfText_destroy(pause->text);
    sfFont_destroy(pause->font);
    sfText_destroy(text->bird);
    sfFont_destroy(text->bird_font);
    sfText_destroy(text->bullet);
    sfFont_destroy(text->bullet_font);
    free(text->str1);
    free(text->str2);
    return;
}
