/*
** EPITECH PROJECT, 2018
** four_move.c
** File description:
** I do program
*/

#include "../../include/runner.h"

sfIntRect saut1(void)
{
    sfIntRect saut;

    saut.top = 42;
    saut.left = 364;
    saut.height = 229;
    saut.width = 80;
    return (saut);
}

sfIntRect movesaut(sfIntRect saut1, allstruct_t *stru)
{
    if (saut1.left < 458)
        saut1.left += 94;
    else {
        saut1.left = 364;
        stru->stra->a = 0;
    }
    return (saut1);
}