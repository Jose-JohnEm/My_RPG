/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_map.c
*/

#include "rpg.h"

void init_map(g_map **map)
{
    *map = malloc(sizeof(g_map));
    (*map)->map_t = sfTexture_createFromFile(MAP_PATH, NULL);
    (*map)->map = sfSprite_create();
    sfSprite_setTexture((*map)->map, (*map)->map_t, sfFalse);
    sfSprite_setPosition((*map)->map, (sfVector2f){400, 90});
    sfSprite_setScale((*map)->map, (sfVector2f){1.5, 1.5});
    (*map)->position.x = 1;
    (*map)->position.y = 1;
}