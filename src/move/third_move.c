/*
** EPITECH PROJECT, 2018
** third_move.c
** File description:
** I do program
*/

#include "../../include/runner.h"

sfIntRect obstacle1(void)
{
    sfIntRect obstacle;
    obstacle.top =  574;
    obstacle.left = 1337;
    obstacle.height = 47;
    obstacle.width = 26;
    return (obstacle);
}

sfIntRect errorobstacle(sfRenderWindow *window, sfEvent event,
    allstruct_t *stru, sfVector2f vector)
{
    if (vector.x == -1090 && stru->stra->a == 0 ||
        vector.x == -1610 && stru->stra->a == 0 ||
        vector.x == -1950 && stru->stra->a == 0 ||
        vector.x == -1990 && stru->stra->a == 0 ||
        vector.x == -2270 && stru->stra->a == 0 ||
        vector.x == -3300 && stru->stra->a == 0 ||
        vector.x == -3870 && stru->stra->a == 0 ||
        vector.x == -4110 && stru->stra->a == 0 ||
        vector.x == -4750 && stru->stra->a == 0 ||
        vector.x == -4720 && stru->stra->a == 0) {
        gestion_music_play(stru);
        music_effect(stru);
        restart(window, event, stru);
    }
}

sfIntRect moveobstacle(sfRenderWindow *window, sfEvent event,
    sfSprite *spriteobstacle1, allstruct_t *stru)
{
    sfVector2f vector;
    vector = sfSprite_getPosition(spriteobstacle1);
    if (vector.x < -5120)
        vector.x = 1280;
    errorobstacle(window, event, stru, vector);
    vector.x -= 5;
    sfSprite_setPosition(spriteobstacle1, vector);
}

sfIntRect ground1(void)
{
    sfIntRect ground;
    ground.top = 606;
    ground.left = 0;
    ground.height = 142;
    ground.width = 1280;
    return (ground);
}

sfIntRect moveground(sfIntRect ground1, allstruct_t *stru)
{
    if (ground1.left < 1280) {
        ground1.left += 5;
    } else {
        ground1.left = 0;
    }
    return (ground1);
}
