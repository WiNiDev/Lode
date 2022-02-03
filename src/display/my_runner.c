/*
** EPITECH PROJECT, 2018
** my_runner.c
** File description:
** I do program
*/

#include "../../include/runner.h"

int display(sfEvent event, sfRenderWindow *window)
{
    allstruct_t *stru = malloc(sizeof(allstruct_t));
    stru->sprite = malloc(sizeof(sprite_t));
    stru->texture = malloc(sizeof(texture_t));
    stru->clock = malloc(sizeof(clock1_t));
    stru->inrect = malloc(sizeof(inrect_t));
    stru->time = malloc(sizeof(time1_t));
    stru->score = malloc(sizeof(score_t));
    stru->stra = malloc(sizeof(stra_t));
    stru->mus = malloc(sizeof(music_t));

    int count = 1;
    set_place_music(window, stru, count);

    while (sfRenderWindow_isOpen(window)) {
        all_soluce(window, event, stru);
        count++;
        place_three(window, stru, count);
    }
    set_place_destroy(window, stru);
}