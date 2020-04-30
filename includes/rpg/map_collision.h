/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** map_collision.h
*/

#include "rpg.h"

#ifndef MAP_COLLISION_H
#define MAP_COLLISION_H


#define set_col(x1, y1, x2, y2) game->map->collides = set_collide(game->map->collides, (vec4){x1, y1, x2, y2});

#define map_col() set_col(0, 0, 2, 2); \
                  set_col(0, 0, 8, 2); \
                  set_col(0, 0, 2, 8); \
                  set_col(0, 0, 8, 8); \
                                       \
                  set_col(0, 1, 1, 2); \
                  set_col(0, 1, 1, 3); \
                  set_col(0, 1, 1, 4); \
                  set_col(0, 1, 1, 5); \
                  set_col(0, 1, 1, 6); \
                  set_col(0, 1, 1, 7); \
                  set_col(0, 1, 2, 2); \
                  set_col(0, 1, 2, 3); \
                  set_col(0, 1, 2, 4); \
                  set_col(0, 1, 2, 5); \
                  set_col(0, 1, 2, 6); \
                  set_col(0, 1, 2, 7); \
                  set_col(0, 1, 3, 2); \
                  set_col(0, 1, 3, 3); \
                  set_col(0, 1, 3, 4); \
                  set_col(0, 1, 3, 5); \
                  set_col(0, 1, 3, 6); \
                  set_col(0, 1, 3, 7); \
                  set_col(0, 1, 4, 2); \
                  set_col(0, 1, 4, 3); \
                  set_col(0, 1, 4, 4); \
                  set_col(0, 1, 4, 5); \
                  set_col(0, 1, 4, 6); \
                  set_col(0, 1, 4, 7); \

#endif