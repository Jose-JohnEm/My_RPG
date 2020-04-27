/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** map.h
*/

#include "rpg.h"

#ifndef MAP_H
#define MAP_H

#define MAP_PATH "assets/map/map.png"

/* ------- map.c ------- */
void draw_map(game_t *game);


/* ----- init_map.c ---- */
void init_map(g_map **map);

#endif