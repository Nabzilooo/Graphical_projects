/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** display_gestion2.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

void display_life(window_t *window, life_t *life)
{
    sfSprite_setTextureRect(life->life_sprite, life->life_rect);
    sfRenderWindow_drawSprite(window->render, life->life_sprite, NULL);
    return;
}

void display_pause(pause_t *pause, window_t *window)
{
    sfText_setFont(pause->text , pause->font);
    sfText_setString(pause->text, "PAUSE");
    sfText_setCharacterSize(pause->text, 70);
    sfText_setColor(pause->text, sfRed);
    sfText_setPosition(pause->text, pause->position);
    sfRenderWindow_drawText(window->render, pause->text, NULL);
    sfRenderWindow_display(window->render);
    return;
}

void display_end_score(duck_t *duck, score_t *score)
{
    my_putstr("Tu viens de finir ta chasse!Tu as eu ");
    my_put_nbr(duck->duck_killed);
    my_putstr(" oiseau(x) et ");
    my_put_nbr((score->final_score));
    my_putstr(" points.\nTu as gaspillé au total ");
    my_put_nbr(duck->shoot - duck->duck_killed);
    my_putstr(" balle(s) pour rien.\n");
    if (duck->duck_killed < 20) {
        my_putstr("\nGrâce à cette chasse tu vas te remplir le ventre.\n");
        return;
    }
    if (duck->duck_killed >= 20 && duck->duck_killed < 50) {
        my_putstr("\nGrâce à cette chasse toute ta famille va se régaler.\n");
        return;
    } else {
        my_putstr("\nL'Afrique est sauvé !!!\n");
        return;
    }
    return;
}

void display_end_window(data_t *data, sfVector2f pos)
{
    sfRenderWindow_clear(data->window->render, sfBlack);
    sfRenderWindow_drawSprite(data->window->render,
    data->window->sprite, NULL);
    disp_text(data, pos);
    sfRenderWindow_display(data->window->render);
    return;
}

void disp_text(data_t *data, sfVector2f pos)
{
    sfText_setFont(data->score->text_score, data->score->font);
    sfText_setString(data->score->text_score,
    my_itoa(data->score->final_score));
    sfText_setCharacterSize(data->score->text_score, 75);
    sfText_setColor(data->score->text_score, sfBlack);
    sfText_setPosition(data->score->text_score, pos);
    sfRenderWindow_drawText(data->window->render,
    data->score->text_score, NULL);
    sfText_setFont(data->text->bird, data->text->bird_font);
    sfText_setString(data->text->bird, my_itoa(data->duck->duck_killed));
    sfText_setCharacterSize(data->text->bird, 75);
    sfText_setColor(data->text->bird, sfBlack);
    sfText_setPosition(data->text->bird, data->text->bird_position);
    sfRenderWindow_drawText(data->window->render, data->text->bird, NULL);
    sfText_setFont(data->text->bullet, data->text->bullet_font);
    sfText_setString(data->text->bullet,
    my_itoa((data->duck->shoot - data->duck->duck_killed)));
    disp_text2(data->text, data->window);
    return;
}
