/*
** EPITECH PROJECT, 2019
** draw.c
** File description:
** I do program
*/

#include "../../include/runner.h"

void all_draw(sfRenderWindow *window, allstruct_t *stru)
{
    sfRenderWindow_drawSprite(window, stru->sprite->spriteback, NULL);
    sfRenderWindow_drawSprite(window, stru->sprite->spritebackground, NULL);
    sfRenderWindow_drawSprite(window, stru->sprite->spritelune, NULL);
    sfRenderWindow_drawSprite(window, stru->sprite->spritenuage, NULL);
    sfRenderWindow_drawSprite(window, stru->sprite->spritearbre, NULL);
    sfRenderWindow_drawSprite(window, stru->sprite->spriteobstacle1, NULL);
    sfRenderWindow_drawText(window, stru->score->texte, NULL);
    sfRenderWindow_drawText(window, stru->score->scor, NULL);
}

void draw_saut(sfRenderWindow *window, allstruct_t *stru)
{
    if (stru->stra->a > 0) {
        sfRenderWindow_drawSprite(window, stru->sprite->spritesaut, NULL);
    }
    if (stru->stra->a == 0) {
        sfRenderWindow_drawSprite(window, stru->sprite->spriteperso, NULL);
    }
}