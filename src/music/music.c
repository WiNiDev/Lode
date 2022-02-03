/*
** EPITECH PROJECT, 2019
** music.c
** File description:
** I do program
*/

#include "../../include/runner.h"

void music_menu(allstruct_t *stru)
{
    stru->mus->soundbuffer = sfSoundBuffer_createFromFile(
        "files/music/menu.ogg");
    stru->mus->sound = sfSound_create();

    sfSound_setBuffer(stru->mus->sound, stru->mus->soundbuffer);
    sfSound_play(stru->mus->sound);
}

void destroy_music_menu(allstruct_t *stru)
{
    sfSound_destroy(stru->mus->sound);
    sfSoundBuffer_destroy(stru->mus->soundbuffer);
}

void music_play(allstruct_t *stru)
{
    stru->mus->soundbuffer3 = sfSoundBuffer_createFromFile(
        "files/music/game.ogg");
    stru->mus->sound3 = sfSound_create();

    sfSound_setBuffer(stru->mus->sound3, stru->mus->soundbuffer3);
    sfSound_play(stru->mus->sound3);
}

void destroy_music_play(allstruct_t *stru)
{
    sfSound_destroy(stru->mus->sound3);
    sfSoundBuffer_destroy(stru->mus->soundbuffer3);
}

void music_effect(allstruct_t *stru)
{
    stru->mus->soundbuffer2 = sfSoundBuffer_createFromFile(
        "files/music/death.ogg");
    stru->mus->sound2 = sfSound_create();

    sfSound_setBuffer(stru->mus->sound2, stru->mus->soundbuffer2);
    sfSound_play(stru->mus->sound2);
}