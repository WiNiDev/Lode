/*
** EPITECH PROJECT, 2018
** second_move.c
** File description:
** I do program
*/

#include "../../include/runner.h"

sfIntRect lune1(void)
{
    sfIntRect lune;
    lune.top = 0;
    lune.left = 0;
    lune.height = 800;
    lune.width = 1280;
    return (lune);
}

sfIntRect movelune(sfIntRect lune1)
{
    if (lune1.left < 1280) {
        lune1.left += 1;
    } else {
        lune1.left = 0;
    }
    return (lune1);
}

sfIntRect nuage1(void)
{
    sfIntRect nuage;
    nuage.top = 0;
    nuage.left = 0;
    nuage.height = 800;
    nuage.width = 1280;
    return (nuage);
}

sfIntRect movenuage(sfIntRect nuage1)
{
    if (nuage1.left < 1280) {
        nuage1.left += 1;
    } else {
        nuage1.left = 0;
    }
    return (nuage1);
}
