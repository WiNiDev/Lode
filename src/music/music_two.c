/*
** EPITECH PROJECT, 2019
** music_two.c
** File description:
** I do program
*/

#include "../../include/runner.h"

void destroy_music_effect(allstruct_t *stru)
{
    sfSound_destroy(stru->mus->sound2);
    sfSoundBuffer_destroy(stru->mus->soundbuffer2);
}

void gestion_effect(allstruct_t *stru)
{
    if (stru->mus->music_eteint == 1) {
        destroy_music_effect(stru);
        stru->mus->music_eteint = 0;
    }
}

void gestion_music_play(allstruct_t *stru)
{
    if (stru->mus->music_eteint2 == 1) {
        destroy_music_play(stru);
        stru->mus->music_eteint2 = 0;
    }
}

void set_place_music(sfRenderWindow *window, allstruct_t *stru, int count)
{
    stru->mus->music_eteint2 = 1;
    stru->mus->music_eteint = 1;

    place_two(window, stru, count);
    music_play(stru);
}