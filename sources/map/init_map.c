/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_map.c
*/

#include "rpg.h"

void init_map(g_map **map)
{
    *map = malloc(sizeof(*map));
    (*map)->map_t = sfTexture_createFromFile(MAP_PATH, NULL);
    (*map)->map = sfSprite_create();
    sfSprite_setTexture((*map)->map, (*map)->map_t, sfFalse);
    sfSprite_setPosition((*map)->map, (sfVector2f){400, 45});
    sfSprite_setScale((*map)->map, (sfVector2f){1.5, 1.5});
}