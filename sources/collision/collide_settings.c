/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collide_settings.c
*/

#include "rpg.h"

int len_int(int *list)
{
    int i = 0;

    for(; list[i] != -1; i++);
    return i;
}

int *my_pos_realloc(int *pos)
{
    int *new = malloc(sizeof(int) * len_int(pos) + 1);

    new[len_int(pos) + 1] = -1;
    for (int i = 0; pos[i] != -1; i++)
        new[i] = pos[i];
    free(pos);
    return new;
}

void set_collide(int ***col, int pos1, int pos2)
{
    *col[pos1] = my_pos_realloc(pos1);
    *col[pos1][pos2] = pos2;
}

int *my_pos_desalloc(int *pos, int place)
{
    int *new = malloc(sizeof(int) * len_int(pos));

    new[len_int(pos)] = -1;
    for (int i = 0, j = 0; pos[j] != -1; i++, j++) {
        if (i == place)
            j++;
        new[i] = pos[j];
    }
    free(pos);
    return new;
}

void unset_collide(int ***col, int pos1, int pos2)
{
    int i = 0;

    for (; *col[pos1] != pos2; i++);
    *col[pos1] = my_pos_desalloc(pos1, i);
}