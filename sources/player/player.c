/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** player.c
*/

#include "rpg.h"

void init_player(game_t *game)
{
    game->player.hp = 100;
    game->player.gold = 10;
    game->player.inv_open = 0;
    game->player.exp = 0;
    game->player.level = 1;
}