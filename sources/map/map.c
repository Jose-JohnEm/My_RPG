/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** map.c
*/

#include "rpg.h"

void draw_map(game_t *game)
{
    sfRenderWindow_drawSprite(game->window, game->map->map, NULL);
}