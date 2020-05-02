/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pnj.c
*/

#include "rpg.h"

void draw_questpnj(game_t *g)
{
    if (g->pnj.quest.x1 == g->map->position.x && g->pnj.quest.y1 == g->map->position.y)
        sfRenderWindow_drawSprite(g->window, g->pnj.pnjquest, NULL);
}