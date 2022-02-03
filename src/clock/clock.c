/*
** EPITECH PROJECT, 2019
** clock.c
** File description:
** I do program
*/

#include "../../include/runner.h"

void inclock_one(sfRenderWindow *window, sfEvent event, allstruct_t *stru)
{
    stru->time->Time1 = sfClock_getElapsedTime(stru->clock->Clock1);
    if (stru->time->Time1.microseconds / 1000000.0 >= 0.070) {
        stru->inrect->rectangle1 = movecube(stru->inrect->rectangle1);
        sfSprite_setTextureRect(stru->sprite->spriteperso,
            stru->inrect->rectangle1);
        sfClock_restart(stru->clock->Clock1);
    }
    stru->time->Time2 = sfClock_getElapsedTime(stru->clock->Clock2);
    if (stru->time->Time2.microseconds >=  0.0001) {
        stru->inrect->rectangle2 = moveground(stru->inrect->rectangle2, stru);
        moveobstacle(window, event, stru->sprite->spriteobstacle1, stru);
        sfSprite_setTextureRect(stru->sprite->spriteback,
            stru->inrect->rectangle2);
        sfClock_restart(stru->clock->Clock2);
    }
}

void inclock_two(allstruct_t *stru)
{
    stru->time->Time3 = sfClock_getElapsedTime(stru->clock->Clock3);
    if (stru->time->Time3.microseconds >= 1) {
        stru->inrect->rectangle3 = movenuage(stru->inrect->rectangle3);
        sfSprite_setTextureRect(stru->sprite->spritenuage,
            stru->inrect->rectangle3);
        sfClock_restart(stru->clock->Clock3);
    }
    stru->time->Time4 = sfClock_getElapsedTime(stru->clock->Clock4);
    if (stru->time->Time4.microseconds >=  0.0001) {
        stru->inrect->rectangle4 = movearbre(stru->inrect->rectangle4);
        sfSprite_setTextureRect(stru->sprite->spritearbre,
            stru->inrect->rectangle4);
        sfClock_restart(stru->clock->Clock4);
    }
}

void inclock_three(allstruct_t *stru)
{
    stru->time->Time5 = sfClock_getElapsedTime(stru->clock->Clock5);
    if (stru->time->Time5.microseconds / 1000000.0 >= 0.1) {
        stru->inrect->rectangle5 = movelune(stru->inrect->rectangle5);
        sfSprite_setTextureRect(stru->sprite->spritelune,
            stru->inrect->rectangle5);
        sfClock_restart(stru->clock->Clock5);
    }
    stru->time->Time6 = sfClock_getElapsedTime(stru->clock->Clock6);
    if (stru->time->Time6.microseconds / 100000.0 >= 3) {
        stru->inrect->rectangle6 = movesaut(stru->inrect->rectangle6, stru);
        sfSprite_setTextureRect(stru->sprite->spritesaut,
            stru->inrect->rectangle6);
        sfClock_restart(stru->clock->Clock6);
    }
    if (stru->stra->a == 0 )
    sfClock_restart(stru->clock->Clock6);
}