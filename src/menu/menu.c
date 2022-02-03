/*
** EPITECH PROJECT, 2018
** menu.c
** File description:
** I do program
*/

#include "../../include/runner.h"

int possetting(sfRenderWindow *window, sfEvent event, allstruct_t *stru)
{
    if (event.mouseButton.x >= 464 &&
        event.mouseButton.y >= 256 &&
        event.mouseButton.x <= 464 + 349 &&
        event.mouseButton.y <= 256 + 81)
        start_set(window, event, stru);
}

int pos(sfEvent event, sfRenderWindow *window, allstruct_t *stru)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x >= 527 &&
            event.mouseButton.y >= 147 &&
            event.mouseButton.x <= 527 + 170 &&
            event.mouseButton.y <= 147 + 75) {
            destroy_music_menu(stru);
            display(event, window);
        }
        possetting(window, event, stru);
        if (event.mouseButton.x >= 517 &&
            event.mouseButton.y >= 365 &&
            event.mouseButton.x <= 517 + 179 &&
            event.mouseButton.y <= 365 + 70) {
            sfRenderWindow_close(window);
            destroy_music_menu(stru);
        }
    }
}

int menu(allstruct_t *stru)
{
    music_t *mus = malloc(sizeof(music_t));

    sfVideoMode mode = {1280, 748, 32};
    sfSprite *spritemenu = sfSprite_create();
    sfEvent event;
    sfRenderWindow *window = sfRenderWindow_create(mode, "SFML window",
    sfResize | sfClose, NULL);
    sfTexture *menu = sfTexture_createFromFile("files/pic/menu.png", NULL);

    sfSprite_setTexture(spritemenu, menu, sfFalse);
    sfRenderWindow_drawSprite(window, spritemenu, NULL);
    sfRenderWindow_display(window);
    music_menu(stru);

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            soluce_first(window, event, stru);
        }
        pos(event, window, stru);
    }
}