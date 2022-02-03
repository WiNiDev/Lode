/*
** EPITECH PROJECT, 2018
** my_itoa.c
** File description:
** I do program
*/

#include <stdlib.h>

char *my_itoa(int number)
{
    char *l = malloc(sizeof(char) * 25);
    int i = 0;
    int j = 1;
    int k = number;

    while (j <= number)
        j = j * 10;
    j = j / 10;
    for (; j != 0; i++, j = j / 10, number = k) {
        number = number / j;
        l[i] = '0' + number;
        k = k - j * number;
        number = number * j;
    }
    l[i] = '\0';
    return (l);
}