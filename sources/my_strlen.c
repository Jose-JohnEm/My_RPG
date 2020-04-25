/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** task03
*/

#include "rpg.h"

int my_strlen(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
