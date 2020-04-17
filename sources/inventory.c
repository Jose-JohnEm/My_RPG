/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** inventory.c
*/

#include "rpg.h"

void init_inventory(game_t *game)
{
    game->player.t_inv = sfTexture_createFromFile("assets/inv.png", NULL);
    game->player.inv = sfSprite_create();
    sfSprite_setTexture(game->player.inv, game->player.t_inv, sfTrue);
    game->player.inv_open = 0;
}

void draw_inventory(game_t *game)
{
    if (game->player.inv_open == 0) {
        sfRenderWindow_drawSprite(game->window, game->player.inv, NULL);
        game->player.inv_open = 1;
    }
    if (game->player.inv_open == 1) {
        sfRenderWindow_clear(game->window, sfBlack);
        game->player.inv_open = 0;
    }
}