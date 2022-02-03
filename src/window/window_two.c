/*
** EPITECH PROJECT, 2019
** window_two.c
** File description:
** I do program
*/

#include "../../include/runner.h"

void set_place_destroy(sfRenderWindow *window, allstruct_t *stru)
{
    gestion_music_play(stru);
    sfRenderWindow_destroy(window);
}