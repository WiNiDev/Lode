/*
** EPITECH PROJECT, 2019
** first_init.c
** File description:
** I do program
*/

#include "../../include/runner.h"

void all_sprite(allstruct_t *stru)
{
    stru->sprite->spriteback = sfSprite_create();
    stru->sprite->spriteperso = sfSprite_create();
    stru->sprite->spritebackground = sfSprite_create();
    stru->sprite->spriteobstacle1 = sfSprite_create();
    stru->sprite->spritenuage = sfSprite_create();
    stru->sprite->spritearbre = sfSprite_create();
    stru->sprite->spritelune = sfSprite_create();
    stru->sprite->spritesaut = sfSprite_create();
}

void all_texture(allstruct_t *stru)
{
    stru->texture->perso = sfTexture_createFromFile("files/pic/perso.png",
        NULL);
    stru->texture->background = sfTexture_createFromFile("files/pic/sol.png",
        NULL);
    stru->texture->back = sfTexture_createFromFile("files/pic/map.png", NULL);
    stru->texture->obstacle1 = sfTexture_createFromFile(
        "files/pic/obstacle.png", NULL);
    stru->texture->nuage = sfTexture_createFromFile("files/pic/nuage.png",
        NULL);
    stru->texture->arbre = sfTexture_createFromFile("files/pic/arbre.png",
        NULL);
    stru->texture->lune = sfTexture_createFromFile("files/pic/lune.png", NULL);
    stru->texture->saut = sfTexture_createFromFile("files/pic/saut.png", NULL);
}

void set_pos(allstruct_t *stru, float x, float y)
{
    sfSprite_setPosition(stru->sprite->spriteperso, vecteur(210, 530));
    sfSprite_setPosition(stru->sprite->spriteback, vecteur(0, 606));
    sfSprite_setPosition(stru->sprite->spriteobstacle1, vecteur(0, 0));
    sfSprite_setPosition(stru->sprite->spritenuage, vecteur(0, 0));
    sfSprite_setPosition(stru->sprite->spritearbre, vecteur(0, 0));
    sfSprite_setPosition(stru->sprite->spritelune, vecteur(0, 0));
    sfSprite_setPosition(stru->sprite->spritesaut, vecteur(200, 410));
}

void set_texture(allstruct_t *stru)
{
    sfSprite_setTexture(stru->sprite->spriteperso, stru->texture->perso,
        sfFalse);
    sfSprite_setTexture(stru->sprite->spriteback, stru->texture->back,
        sfFalse);
    sfSprite_setTexture(stru->sprite->spritebackground,
        stru->texture->background, sfFalse);
    sfSprite_setTexture(stru->sprite->spriteobstacle1,
        stru->texture->obstacle1, sfFalse);
    sfSprite_setTexture(stru->sprite->spritenuage,
        stru->texture->nuage, sfFalse);
    sfSprite_setTexture(stru->sprite->spritearbre,
        stru->texture->arbre, sfFalse);
    sfSprite_setTexture(stru->sprite->spritelune, stru->texture->lune, sfFalse);
    sfSprite_setTexture(stru->sprite->spritesaut, stru->texture->saut, sfFalse);
}

void set_clock(allstruct_t *stru)
{
    stru->clock->Clock1 = sfClock_create();
    stru->clock->Clock2 = sfClock_create();
    stru->clock->Clock3 = sfClock_create();
    stru->clock->Clock4 = sfClock_create();
    stru->clock->Clock5 = sfClock_create();
    stru->clock->Clock6 = sfClock_create();
}