/*
** EPITECH PROJECT, 2019
** window.c
** File description:
** I do program
*/

#include "../../include/runner.h"

void soluce_first(sfRenderWindow *window, sfEvent event,
    allstruct_t *stru)
{
    if (event.type == sfEvtClosed) {
        destroy_music_menu(stru);
        sfRenderWindow_close(window);
        sfRenderWindow_destroy(window);
    }
}

void soluce_first_bis(sfRenderWindow *window, sfEvent event,
    allstruct_t *stru)
{
    if (event.type == sfEvtClosed) {
        sfRenderWindow_close(window);
        sfRenderWindow_destroy(window);
    }
}

void soluce_second(sfEvent event, allstruct_t *stru)
{
    if (event.type == sfEvtKeyPressed) {
        if (event.text.unicode == sfKeySpace)
            stru->stra->a = 1;
    }
}

void soluce_third(sfRenderWindow *window, sfEvent event, allstruct_t *stru)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        soluce_first_bis(window, event, stru);
        soluce_second(event, stru);
    }
}

void all_soluce(sfRenderWindow *window, sfEvent event, allstruct_t *stru)
{
    soluce_third(window, event, stru);
    set_all_clock(window, event, stru);
    all_draw(window, stru);
    draw_saut(window, stru);
}