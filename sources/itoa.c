/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** itoa.c
*/

#include "stdlib.h"
#include "unistd.h"

char *itoa(int nb)
{
    char *str = NULL;
    int i = 0;

    if (nb == 0)
        return "0\0";
    for (int cp = nb; cp > 0; i++, cp /= 10);
    str = malloc(sizeof(char) * i + 1);
    str[i] = '\0';
    for (i--; nb > 0; i--, nb /= 10)
        str[i] = (nb % 10) + '0';
    return str;
}