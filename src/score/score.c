/*
** EPITECH PROJECT, 2019
** score.c
** File description:
** I do program
*/

#include "../../include/runner.h"

void fnscore(float x, float y, char *s, allstruct_t *stru)
{
    all_score(stru);

    sfFont *font = sfFont_createFromFile("files/font/highbury.ttf");

    sfText_setCharacterSize(stru->score->texte, 45);
    sfText_setCharacterSize(stru->score->scor, 45);
    sfText_setString(stru->score->texte, "Score : ");
    sfText_setString(stru->score->scor, s);
    sfText_setFont(stru->score->texte, font);
    sfText_setFont(stru->score->scor, font);
    sfText_setFillColor(stru->score->texte, sfWhite);
    sfText_setFillColor(stru->score->scor, sfWhite);
    sfText_setPosition(stru->score->texte, vecteur(20, 20));
    sfText_setPosition(stru->score->scor, vecteur(130, 25));
}

void all_score(allstruct_t *stru)
{
    stru->score->texte = sfText_create();
    stru->score->scor = sfText_create();
}

void place_one(sfRenderWindow *window, allstruct_t *stru, char *s)
{
    fnscore(stru->stra->x, stru->stra->y, s, stru);
    sfRenderWindow_display(window);
    sfRenderWindow_clear(window, sfBlack);
}

void place_two(sfRenderWindow *window, allstruct_t *stru, int count)
{
    char *s = my_itoa(count);
    stru->stra->a = 0;

    set_all(stru->stra->x, stru->stra->y, s, stru);
    sfRenderWindow_setFramerateLimit(window, 60);
}

void place_three(sfRenderWindow *window, allstruct_t *stru, int count)
{
    char *s = my_itoa(count);

    place_one(window, stru, s);
}