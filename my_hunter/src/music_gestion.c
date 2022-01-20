/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** music_gestion.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include <time.h>
#include "../include/hunter.h"

music_t *initialize_music(void)
{
    music_t *music = malloc(sizeof(music_t));

    if (music == NULL)
        return (NULL);
    music->ambiance = sfMusic_createFromFile("sound/bird_music.wav");
    music->killed_buffer = sfSoundBuffer_createFromFile("sound/quack.wav");
    music->killed = sfSound_create();
    music->shoot_buffer = sfSoundBuffer_createFromFile("sound/shoot.wav");
    music->shoot = sfSound_create();
    return (music);
}

void put_music_theme(music_t *music)
{
    sfMusic_setVolume(music->ambiance, 65);
    sfMusic_setLoop(music->ambiance, sfTrue);
    sfMusic_play(music->ambiance);
    return;
}

void put_song_bird_killed(music_t *music)
{
    sfSound_setBuffer(music->killed, music->killed_buffer);
    sfSound_setVolume(music->killed, 15);
    sfSound_play(music->killed);
    return;
}

void put_song_shoot(music_t *music)
{
    sfSound_setBuffer(music->shoot, music->shoot_buffer);
    sfSound_setVolume(music->shoot, 15);
    sfSound_play(music->shoot);
    return;
}
