/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** map_struct.h
*/

#include "rpg.h"

#ifndef MAP_STRUCT_H
#define MAP_STRUCT_H

typedef struct g_map
{
    sfSprite *map;
    sfTexture *map_t;
    sfVector2i position;
    int **collides;
} g_map;

#endif