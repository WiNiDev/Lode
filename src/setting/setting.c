/*
** EPITECH PROJECT, 2019
** setting.c
** File description:
** I do program
*/

#include "../../include/runner.h"

int posset_two(sfEvent event, sfRenderWindow *window, allstruct_t *stru)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x >= 543 &&
            event.mouseButton.y >= 238 &&
            event.mouseButton.x <= 543 + 97 &&
            event.mouseButton.y <= 238 + 38) {
            destroy_music_menu(stru);
            display(event, window);
        }
    }
}

int posset_one(sfEvent event, sfRenderWindow *window, allstruct_t *stru)
{
    if (event.type == sfEvtMouseButtonPressed) {
        if (event.mouseButton.x >= 517 &&
            event.mouseButton.y >= 151 &&
            event.mouseButton.x <= 517 + 59 &&
            event.mouseButton.y <= 151 + 32)
            sfSound_play(stru->mus->sound);
        if (event.mouseButton.x >= 588 &&
            event.mouseButton.y >= 157 &&
            event.mouseButton.x <= 588 + 59 &&
            event.mouseButton.y <= 157 + 32)
            sfSound_pause(stru->mus->sound);
    }
}

int start_set(sfRenderWindow *window, sfEvent event, allstruct_t *stru)
{
    sfSprite *spritesetting = sfSprite_create();
    sfTexture *setting = sfTexture_createFromFile("files/pic/setting.png",
        NULL);

    sfSprite_setTexture(spritesetting, setting, sfFalse);
    sfRenderWindow_drawSprite(window, spritesetting, NULL);
    sfRenderWindow_display(window);

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            soluce_first(window, event, stru);
            posset_one(event, window, stru);
            posset_two(event, window, stru);
        }
    }
    gestion_effect(stru);
    gestion_music_play(stru);
    sfRenderWindow_destroy(window);
}