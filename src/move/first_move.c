/*
** EPITECH PROJECT, 2018
** first_move.c
** File description:
** I do program
*/

#include "../../include/runner.h"

sfVector2f vecteur(float x, float y)
{
    sfVector2f vecteur;

    vecteur.x = x;
    vecteur.y = y;
    return (vecteur);
}

sfIntRect cube1(void)
{
    sfIntRect cube;

    cube.top = 335;
    cube.left = 548;
    cube.height = 90;
    cube.width = 60;
    return (cube);
}

sfIntRect movecube(sfIntRect cube1)
{
    if (cube1.left < 326 - 60 + 548) {
        cube1.left += 108;
    } else {
        cube1.left = 548;
    }
    return (cube1);
}

sfIntRect arbre1(void)
{
    sfIntRect arbre;

    arbre.top = 0;
    arbre.left = 0;
    arbre.height = 800;
    arbre.width = 1280;
    return (arbre);
}

sfIntRect movearbre(sfIntRect arbre1)
{
    if (arbre1.left < 1280) {
        arbre1.left += 3;
    } else {
        arbre1.left = 0;
    }
    return (arbre1);
}
