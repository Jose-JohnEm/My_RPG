/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** map_collision.h
*/

#include "rpg.h"

#ifndef MAP_COLLISION_H
#define MAP_COLLISION_H

#define set_col(x1, y1, x2, y2) game->map->collides = \
        set_collide(game->map->collides, (vec4){x1, y1, x2, y2});

#endif