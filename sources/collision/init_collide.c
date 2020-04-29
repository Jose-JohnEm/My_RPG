/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_collide.c
*/

#include "rpg.h"

int **init_collide(void)
{
    int **new = malloc(sizeof(int *) * 50);

    new[49] = NULL;
    for (int i = 0; i < 49; i++) {
        new[i] = malloc(sizeof(int));
        new[i][0] = 0;
    }
    return new;
}