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
                                       \
                  set_col(1, 1, 6, 0); \
                  set_col(1, 1, 6, 1); \
                  set_col(1, 1, 6, 2); \
                  set_col(1, 1, 6, 2); \
                  set_col(1, 1, 7, 2); \
                  set_col(1, 1, 8, 2); \
                  set_col(1, 1, 9, 2); \
                  set_col(1, 1, 6, 7); \
                  set_col(1, 1, 6, 8); \
                  set_col(1, 1, 6, 9); \
                  set_col(1, 1, 7, 6); \
                  set_col(1, 1, 8, 6); \
                  set_col(1, 1, 9, 6); \
                                       \
                  set_col(1, 0, 3, 3); \
                  set_col(1, 0, 3, 4); \
                  set_col(1, 0, 3, 5); \
                  set_col(1, 0, 3, 6); \
                  set_col(1, 0, 3, 7); \
                  set_col(1, 0, 4, 3); \
                  set_col(1, 0, 5, 3); \
                  set_col(1, 0, 6, 3); \
                  set_col(1, 0, 6, 4); \
                  set_col(1, 0, 6, 5); \
                  set_col(1, 0, 6, 6); \
                  set_col(1, 0, 6, 7); \
                  set_col(1, 0, 5, 7); \
                  set_col(1, 0, 4, 7); \
                                       \
                  set_col(2, 0, 2, 6); \
                  set_col(2, 0, 2, 7); \
                  set_col(2, 0, 2, 8); \
                  set_col(2, 0, 2, 9); \
                  set_col(2, 0, 3, 6); \
                  set_col(2, 0, 6, 6); \
                  set_col(2, 0, 7, 6); \
                  set_col(2, 0, 8, 6); \
                  set_col(2, 0, 9, 6); \
                  set_col(2, 0, 3, 7); \
                  set_col(2, 0, 3, 8); \
                  set_col(2, 0, 3, 9); \
                  set_col(2, 0, 6, 7); \
                  set_col(2, 0, 6, 8); \
                  set_col(2, 0, 6, 9); \
                                       \
                  set_col(2, 1, 3, 0); \
                  set_col(2, 1, 3, 1); \
                  set_col(2, 1, 3, 2); \
                  set_col(2, 1, 3, 3); \
                  set_col(2, 1, 3, 6); \
                  set_col(2, 1, 3, 7); \
                  set_col(2, 1, 3, 8); \
                  set_col(2, 1, 3, 9); \
                  set_col(2, 1, 6, 0); \
                  set_col(2, 1, 6, 1); \
                  set_col(2, 1, 6, 2); \
                  set_col(2, 1, 6, 3); \
                  set_col(2, 1, 6, 6); \
                  set_col(2, 1, 6, 7); \
                  set_col(2, 1, 6, 8); \
                  set_col(2, 1, 6, 9); \
                  set_col(2, 1, 0, 3); \
                  set_col(2, 1, 1, 3); \
                  set_col(2, 1, 2, 3); \
                  set_col(2, 1, 6, 3); \
                  set_col(2, 1, 7, 3); \
                  set_col(2, 1, 8, 3); \
                  set_col(2, 1, 9, 3); \
                  set_col(2, 1, 0, 6); \
                  set_col(2, 1, 1, 6); \
                  set_col(2, 1, 2, 6); \
                  set_col(2, 1, 7, 6); \
                  set_col(2, 1, 8, 6); \
                  set_col(2, 1, 9, 6); \
                                       \
                  set_col(1, 2, 3, 0); \
                  set_col(1, 2, 2, 1); \
                  set_col(1, 2, 1, 2); \
                  set_col(1, 2, 0, 3); \
                  set_col(1, 2, 0, 6); \
                  set_col(1, 2, 1, 7); \
                  set_col(1, 2, 2, 8); \
                  set_col(1, 2, 3, 9); \
                                       \
                  set_col(3, 0, 0, 6); \
                  set_col(3, 0, 1, 6); \
                  set_col(3, 0, 2, 6); \
                  set_col(3, 0, 3, 6); \
                  set_col(3, 0, 3, 7); \
                  set_col(3, 0, 3, 8); \
                  set_col(3, 0, 3, 9); \
                                       \
                  set_col(3, 1, 3, 0); \
                  set_col(3, 1, 3, 1); \
                  set_col(3, 1, 3, 2); \
                  set_col(3, 1, 3, 3); \
                  set_col(3, 1, 3, 6); \
                  set_col(3, 1, 3, 7); \
                  set_col(3, 1, 3, 8); \
                  set_col(3, 1, 6, 0); \
                  set_col(3, 1, 6, 1); \
                  set_col(3, 1, 6, 2); \
                  set_col(3, 1, 6, 3); \
                  set_col(3, 1, 6, 4); \
                  set_col(3, 1, 6, 5); \
                  set_col(3, 1, 6, 6); \
                  set_col(3, 1, 6, 7); \
                  set_col(3, 1, 6, 8); \
                  set_col(3, 1, 6, 9); \
                  set_col(3, 1, 0, 3); \
                  set_col(3, 1, 1, 3); \
                  set_col(3, 1, 2, 3); \
                  set_col(3, 1, 0, 6); \
                  set_col(3, 1, 1, 6); \
                  set_col(3, 1, 2, 6); \
                                       \
                  set_col(2, 2, 3, 0); \
                  set_col(2, 2, 3, 1); \
                  set_col(2, 2, 3, 2); \
                  set_col(2, 2, 6, 0); \
                  set_col(2, 2, 6, 1); \
                  set_col(2, 2, 6, 2); \
                  set_col(2, 2, 2, 0); \
                  set_col(2, 2, 2, 2); \
                  set_col(2, 2, 1, 0); \
                  set_col(2, 2, 1, 1); \
                  set_col(2, 2, 1, 2); \
                  set_col(2, 2, 6, 2); \
                  set_col(2, 2, 7, 2); \
                  set_col(2, 2, 8, 2); \
                  set_col(2, 2, 8, 1); \
                  set_col(2, 2, 8, 0); \
                  set_col(2, 2, 0, 7); \
                  set_col(2, 2, 1, 7); \
                  set_col(2, 2, 2, 8); \
                  set_col(2, 2, 3, 8); \
                  set_col(2, 2, 3, 9); \
                  set_col(2, 2, 6, 9); \
                  set_col(2, 2, 6, 8); \
                  set_col(2, 2, 7, 8); \
                  set_col(2, 2, 8, 7); \
                  set_col(2, 2, 9, 7); \
                                       \
                  set_col(2, 3, 0, 1); \
                  set_col(2, 3, 1, 1); \
                  set_col(2, 3, 2, 1); \
                  set_col(2, 3, 3, 1); \
                  set_col(2, 3, 3, 0); \
                  set_col(2, 3, 6, 0); \
                  set_col(2, 3, 6, 1); \
                  set_col(2, 3, 7, 1); \
                  set_col(2, 3, 8, 1); \
                  set_col(2, 3, 8, 2); \
                  set_col(2, 3, 8, 3); \
                  set_col(2, 3, 9, 3); \
                  set_col(2, 3, 4, 4); \
                  set_col(2, 3, 4, 5); \
                  set_col(2, 3, 5, 5); \
                  set_col(2, 3, 5, 4); \
                  set_col(2, 3, 0, 8); \
                  set_col(2, 3, 1, 8); \
                  set_col(2, 3, 2, 8); \
                  set_col(2, 3, 3, 8); \
                  set_col(2, 3, 3, 9); \
                  set_col(2, 3, 6, 9); \
                  set_col(2, 3, 6, 8); \
                  set_col(2, 3, 7, 8); \
                  set_col(2, 3, 9, 6); \
                  set_col(2, 3, 8, 6); \
                  set_col(2, 3, 8, 7); \
                                       \
                  set_col(1, 3, 0, 2); \
                  set_col(1, 3, 1, 2); \
                  set_col(1, 3, 2, 2); \
                  set_col(1, 3, 3, 2); \
                  set_col(1, 3, 3, 1); \
                  set_col(1, 3, 3, 0); \
                  set_col(1, 3, 6, 1); \
                  set_col(1, 3, 6, 0); \
                  set_col(1, 3, 7, 1); \
                  set_col(1, 3, 8, 1); \
                  set_col(1, 3, 9, 1); \
                  set_col(1, 3, 9, 8); \
                  set_col(1, 3, 8, 8); \
                  set_col(1, 3, 7, 8); \
                  set_col(1, 3, 6, 8); \
                  set_col(1, 3, 6, 9); \
                  set_col(1, 3, 0, 7); \
                  set_col(1, 3, 1, 7); \
                  set_col(1, 3, 2, 7); \
                  set_col(1, 3, 3, 7); \
                  set_col(1, 3, 3, 8); \
                  set_col(1, 3, 3, 9); \
                                       \
                  set_col(6, 2, 0, 7); \
                  set_col(6, 2, 1, 7); \
                  set_col(6, 2, 1, 8); \
                  set_col(6, 2, 1, 9); \
                                       \
                  set_col(6, 3, 1, 3); \
                  set_col(6, 3, 2, 3); \
                  set_col(6, 3, 3, 3); \
                  set_col(6, 3, 3, 2); \
                  set_col(6, 3, 3, 1); \
                  set_col(6, 3, 0, 6); \
                  set_col(6, 3, 1, 7); \
                  set_col(6, 3, 2, 8); \
                  set_col(6, 3, 3, 9); \
                  set_col(6, 3, 6, 0); \
                  set_col(6, 3, 6, 1); \
                  set_col(6, 3, 6, 2); \
                  set_col(6, 3, 6, 3); \
                  set_col(6, 3, 6, 6); \
                  set_col(6, 3, 6, 7); \
                  set_col(6, 3, 6, 8); \
                  set_col(6, 3, 6, 9); \
                  set_col(6, 3, 7, 6); \
                                       \
                  set_col(6, 4, 6, 0); \
                  set_col(6, 4, 6, 1); \
                  set_col(6, 4, 6, 2); \
                  set_col(6, 4, 6, 3); \
                  set_col(6, 4, 6, 4); \
                  set_col(6, 4, 6, 5); \
                  set_col(6, 4, 6, 6); \
                  set_col(6, 4, 6, 7); \
                  set_col(6, 4, 6, 8); \
                  set_col(6, 4, 6, 9); \
                  set_col(6, 4, 0, 3); \
                  set_col(6, 4, 1, 3); \
                  set_col(6, 4, 2, 3); \
                  set_col(6, 4, 3, 3); \
                  set_col(6, 4, 3, 2); \
                  set_col(6, 4, 3, 1); \
                  set_col(6, 4, 3, 0); \
                  set_col(6, 4, 0, 6); \
                  set_col(6, 4, 1, 6); \
                  set_col(6, 4, 2, 6); \
                  set_col(6, 4, 3, 6); \
                  set_col(6, 4, 3, 7); \
                  set_col(6, 4, 3, 8); \
                  set_col(6, 4, 3, 9); \
                                       \
                  set_col(6, 5, 3, 3); \
                  set_col(6, 5, 3, 4); \
                  set_col(6, 5, 3, 5); \
                  set_col(6, 5, 3, 6); \
                  set_col(6, 5, 3, 7); \
                  set_col(6, 5, 4, 3); \
                  set_col(6, 5, 5, 3); \
                  set_col(6, 5, 6, 3); \
                  set_col(6, 5, 6, 4); \
                  set_col(6, 5, 6, 5); \
                  set_col(6, 5, 6, 6); \
                  set_col(6, 5, 6, 7); \
                  set_col(6, 5, 5, 7); \
                  set_col(6, 5, 4, 7); \

#endif