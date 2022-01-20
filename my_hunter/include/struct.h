/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** struct.h
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>

#ifndef STRUCT_H_
    #define STRUCT_H_

typedef struct duck_s {
    sfIntRect size;
    sfVector2f position;
    sfSprite *duck_sprite;
    sfTexture *texture;
    float random_position;
    sfClock *clock1;
    sfTime time1;
    float seconds1;
    sfClock *clock2;
    sfTime time2;
    float seconds2;
    int speed;
    int duck_killed;
    int shoot;
} duck_t;

typedef struct window_s {
    sfRenderWindow *render;
    sfVideoMode mode;
    sfSprite *background;
    sfTexture *texture;
    sfSprite *sprite;
    sfTexture *texture_end;
} window_t;

typedef struct cursor_s {
    sfVector2i pos;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f position;
} cursor_t;

typedef struct score_s {
    sfIntRect rect;
    sfSprite *score_sprite;
    sfVector2f score_position;
    sfTexture *texture;
    int final_score;
    sfText *text_score;
    sfFont *font;
    sfVector2f text_position;
    char *str;
} score_t;

typedef struct life_s {
    sfIntRect life_rect;
    sfSprite *life_sprite;
    sfTexture *texture;
    sfEvent event;
    sfVector2f life_pos;
} life_t;

typedef struct pause_s {
    sfText *text;
    sfFont *font;
    sfVector2f position;
} pause_t;

typedef struct music_s {
    sfMusic *ambiance;
    sfSoundBuffer *killed_buffer;
    sfSound *killed;
    sfSoundBuffer *shoot_buffer;
    sfSound *shoot;
} music_t;

typedef struct text_s {
    sfText *bird;
    sfFont *bird_font;
    sfVector2f bird_position;
    sfText *bullet;
    sfFont *bullet_font;
    sfVector2f bullet_position;
    char *str1;
    char *str2;
} text_t;

typedef struct data_s {
    window_t *window;
    duck_t *duck;
    cursor_t *cursor;
    score_t *score;
    life_t *life;
    pause_t *pause;
    music_t *music;
    text_t *text;
} data_t;

#endif
