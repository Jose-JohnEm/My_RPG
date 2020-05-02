/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pnj.c
*/

#include "rpg.h"

void draw_questpnj(game_t *game)
{
    sfSprite_setPosition(game->pnj.pnjquest, (sfVector2f){0, 800});
    sfRenderWindow_drawText(game->window, game->pnj.pnjquest, NULL);
}