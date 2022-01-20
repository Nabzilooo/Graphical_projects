/*
** EPITECH PROJECT, 2021
** B-MUL-100-TLS-1-1-myhunter-adil.nouiri
** File description:
** hunter.h
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "struct.h"

#ifndef HUNTER_H_
    #define HUNTER_H_

data_t *initialise_data(void);

window_t *create_window(void);

void display_window_background(window_t *window);

void display_duck(window_t *window, duck_t *duck);

void display_all(data_t *data);

void display_cursor(cursor_t *cursor, window_t *window);

void display_score(score_t *score, window_t *window);

void display_life(window_t *window, life_t *life);

int handle_events(data_t *data);

duck_t *initialise_duck(void);

void destroy_all(data_t *data);

void destroy_window(window_t *window);

void destroy_duck(duck_t *duck);

duck_t *move_rect(duck_t *duck);

duck_t *advance_duck(duck_t *duck);

void destroy_clock(duck_t *duck);

int move_duck_and_low_life(duck_t *duck, life_t *life, window_t *window);

cursor_t *initialise_cursor(window_t *window);

void destroy_cursor(cursor_t *cursor);

void destroy_score(score_t *score);

void destroy_life(life_t *life);

score_t *initialise_score(window_t *window);

life_t *initialise_life(window_t *window);

data_t *shoot_duck(data_t *data, sfEvent event);

int ext_stop(sfEvent event, window_t *window, pause_t *pause, music_t *music);

int update_all(data_t *data);

void put_pause(sfEvent event, window_t *window, pause_t *pause, music_t *music);

pause_t *initialize_pause(void);

void display_pause(pause_t *pause, window_t *window);

music_t *initialize_music(void);

void put_song_shoot(music_t *music);

void put_song_bird_killed(music_t *music);

void put_music_theme(music_t *music);

void destroy_all_music(music_t *music);

void destroy_pause_and_text(pause_t *pause, text_t *text);

int lose_life(duck_t *duck, life_t *life, window_t *window);

duck_t *accelerate_duck(duck_t *duck);

void display_end_score(duck_t *duck, score_t *score);

int end_game(data_t *data, sfEvent event);

int my_end_game_window(data_t *data);

void display_end_window(data_t *data, sfVector2f pos);

int handle_end_events(data_t *data, sfEvent event);

int exit_game(data_t *data, sfEvent event);

text_t *initialize_text(void);

void disp_text(data_t *data, sfVector2f pos);

sfVector2f setting_end(sfVector2f pos, data_t *data);

duck_t *initialize_duck2(duck_t *duck);

score_t *initialize_score2(score_t *score);

void disp_text2(text_t *text, window_t *window);

#endif
