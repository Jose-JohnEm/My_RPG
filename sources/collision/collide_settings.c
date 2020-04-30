/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collide_settings.c
*/

#include "rpg.h"

char *my_strdup(char *str)
{
    int i = 0;
    char *res = malloc(sizeof(char) * my_strlen(str) + 1);

    my_strcpy(res, str);
    free(str);
    return (res);
}

void my_strcpy(char *s1, char const *s2)
{
    int i = 0;

    for (; s2[i] != '\0'; i++)
        s1[i] = s2[i];
    s1[i] = '\0';
}

int my_strcmp(char const *s1, char const *s2)
{
    for (int i = 0; s1[i] == s2[i]; i++)
        if (s1[i] == '\0' && s2[i] == '\0')
            return 1;
    return 0;
}

char **set_collide(char **col, vec4 pos)
{
    int i = 0;
    char **new = NULL;

    for (; col[i] != NULL; i++);
    new = malloc(sizeof(char *) * (i + 2));
    for (i = 0; col[i] != NULL; i++)
        new[i] = my_strdup(col[i]);
    new[i] = malloc(6);
    new[i][0] = pos.x1 + '0';
    new[i][1] = pos.y1 + '0';
    new[i][2] = ':';
    new[i][3] = pos.x2 + '0';
    new[i][4] = pos.y2 + '0';
    new[i][5] = '\0';
    new[i + 1] = NULL;
    free(col);
    return new;
}

void unset_collide(g_map **col, vec4 pos)
{
    char to_find[6];
    int i = 0;

    to_find[0] = pos.x1 + '0';
    to_find[1] = pos.y1 + '0';
    to_find[2] = ':';
    to_find[3] = pos.x2 + '0';
    to_find[4] = pos.y2 + '0';
    to_find[5] = '\0';

    for (; my_strcmp((*col)->collides[i], to_find); i++);
    free((*col)->collides[i++]);
    for (; (*col)->collides[i] != NULL; i++)
        (*col)->collides[i - 1] = (*col)->collides[i];
    (*col)->collides[i - 1] = NULL;
}