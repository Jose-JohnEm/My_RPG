/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** getinfo.c
*/

#include "rpg.h"

char *get_info(void)
{
    char *str = NULL;
    size_t size = 0;
    int result = 0;

    result = getline(&str, &size, stdin);
    if (result == -1)
        str = NULL;
    else
        str[my_strlen(str) - 1] = '\0';
    return str;
}