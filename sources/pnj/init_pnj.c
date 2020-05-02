/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pnj.c
*/

#include "rpg.h"

void init_questpnj(game_t *game)
{
    game->pnj.t_pnjquest = sfTexture_createFromFile("assets/pnj3.jpg", NULL);
    game->pnj.pnjquest = sfSprite_create();
    sfSprite_setTexture(game->pnj.pnjquest, game->pnj.t_pnjquest, sfTrue);
}

void init_pnjs(game_t *game)
{
    init_questpnj(game);
}