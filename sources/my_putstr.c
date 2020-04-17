/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** lib - mehdi.zehri
*/

#include "rpg.h"

int my_putstr(char *str)
{
    int a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a = a + 1;
    }
}