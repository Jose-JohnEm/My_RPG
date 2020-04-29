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
    return i + 1;
}

int *my_pos_realloc(int **pos, int len)
{
    int *new = malloc(sizeof(int) * (len + 1) + 1);
    int i = 0;

    new[0] = 0;
    printf("List = ");
    for (int x = 0;  x <= len; x++)
        printf("%d ", *pos[x]);
    printf("\n");
    for (; i <= len; i++)
        new[i] = *pos[i];
    new[len + 1] = -1;
    free(*pos);
    return new;

}

void set_collide(int ***col, sfVector2i p1, sfVector2i p2)
{
    int pos1 = (p1.y - 1) * 7 + p1.x - 1;
    int pos2 = (p2.y - 1) * 7 + p2.x - 1;
    static int cur[49];

    *col[pos1] = my_pos_realloc(&*col[pos1], cur[pos1]);
    printf("case : %d    number : %d\n\n", cur[pos1], pos2);
    *col[pos1][cur[pos1]] = pos2;
    cur[pos1]++;
}

int *my_pos_desalloc(int *pos, int place)
{
    int *new = malloc(sizeof(int) * len_int(pos));

    new[len_int(pos) - 1] = -1;
    for (int i = 0, j = 0; pos[j] != -1; i++, j++) {
        if (i == place)
            j++;
        new[i] = pos[j];
    }
    free(pos);
    return new;
}

void unset_collide(int ***col, sfVector2i p1, sfVector2i p2)
{
    int pos1 = (p1.y - 1) * 7 + p1.x;
    int pos2 = (p2.y - 1) * 7 + p2.x;
    int i = 0;

    for (; *col[pos1][i] != pos2; i++);
    *col[pos1] = my_pos_desalloc(*col[pos1], i);
}