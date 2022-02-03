/*
** EPITECH PROJECT, 2018
** MY_PUTCHAR
** File description:
** fct who display a char
*/

#include <unistd.h>

void my_putchar(char c)
{
    write (1, &c, 1);
}
