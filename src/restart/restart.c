/*
** EPITECH PROJECT, 2019
** restart.c
** File description:
** I do program
*/

#include "../../include/runner.h"

int posi(sfEvent event, sfRenderWindow *window, allstruct_t *stru)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x >= 420 &&
            event.mouseButton.y >= 220 &&
            event.mouseButton.x <= 420 + 400 &&
            event.mouseButton.y <= 220 + 83) {
            display(event, window);
            gestion_effect(stru);
        }
        if (event.mouseButton.x >= 514 &&
            event.mouseButton.y >= 330 &&
            event.mouseButton.x <= 514 + 169 &&
            event.mouseButton.y <= 330 + 66) {
            sfRenderWindow_close(window);
            gestion_music_play(stru);
            gestion_effect(stru);
        }
    }
}

int restart(sfRenderWindow *window, sfEvent event, allstruct_t *stru)
{
    sfSprite *spriterestart = sfSprite_create();
    sfTexture *restart = sfTexture_createFromFile("files/pic/restart.png",
        NULL);

    sfSprite_setTexture(spriterestart, restart, sfFalse);
    sfRenderWindow_drawSprite(window, spriterestart, NULL);
    sfRenderWindow_display(window);

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            soluce_first_bis(window, event, stru);
            posi(event, window, stru);
        }
    }
    gestion_effect(stru);
    gestion_music_play(stru);
    sfRenderWindow_destroy(window);
}