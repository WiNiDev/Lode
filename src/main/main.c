/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** I do program
*/

#include "../../include/runner.h"

int bad_arg(int ac, char **av)
{
    if (ac == 1) {
        my_putstr("./my_runner : bad arguments\n");
        my_putstr("retry with -h\n");
        return (84);
    }
    if (ac > 2) {
        my_putstr("./my_runner : bad arguments\n");
        my_putstr("retry with -h\n");
        return (84);
    }
    if (ac == 2 && av[1][0] == '-') {
        if (av[1][1] != 'h' && av[1][1] != 'i' &&
            av[1][2] == '\0' || av[1][1] != 'h' && av[1][1] != 'i' &&
            av[1][1] != '\0') {
            my_putstr("./my_runner : bad arguments\n");
            my_putstr("retry with -h\n");
            return (84);
        }
    }
}

int second_bad_arg(int ac, char **av, allstruct_t *stru)
{
    if (ac == 2 && av[1][0] == '-') {
        if (av[1][1] == 'h' && av[1][2] == '\0') {
            my_putstr("By Meric, runner created with CSFML\n\n");
            my_putstr("\t\tUSAGE\n\n");
            my_putstr("./my_runner map.txt\n\n");
            my_putstr("\t\tOPTIONS\n\n");
            my_putstr("-i : The game in infinity mode\n");
            my_putstr("-h : The usage and quit\n");
            my_putstr("Space : Jump\n");
            return (0);
        } else if (av[1][1] == 'i' && av[1][2] == '\0')
            menu(stru);
        } else
            return (84);
}

int third_bad_arg(int ac, char **av)
{
    int y;

    if (y == -1) {
        my_putstr("Error files, retry with -h");
        return (84);
    }
}

int main(int ac, char **av, allstruct_t *stru)
{
    if (bad_arg(ac, av) == 84)
        return (84);
    third_bad_arg(ac, av);
    return (second_bad_arg(ac, av, stru));
}