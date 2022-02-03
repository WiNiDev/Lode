/*
** EPITECH PROJECT, 2019
** second_init.c
** File description:
** I do program
*/

#include "../../include/runner.h"

void all_inrect(allstruct_t *stru)
{
    stru->inrect->rectangle1 = cube1();
    stru->inrect->rectangle2 = ground1();
    stru->inrect->rectangle3 = nuage1();
    stru->inrect->rectangle4 = arbre1();
    stru->inrect->rectangle5 = lune1();
    stru->inrect->rectangle6 = saut1();
}

void set_all_clock(sfRenderWindow *window, sfEvent event, allstruct_t *stru)
{
    inclock_one(window, event, stru);
    inclock_two(stru);
    inclock_three(stru);
}

void set_all(int x, int y, char *s, allstruct_t *stru)
{
    all_inrect(stru);
    set_clock(stru);
    all_sprite(stru);
    all_texture(stru);
    set_texture(stru);
    set_pos(stru, x, y);
    fnscore(x, y, s, stru);
}