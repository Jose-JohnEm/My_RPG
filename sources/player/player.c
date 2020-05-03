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
    game->player.target = (p_target){0, 0, 0, sfSprite_create(),
                                    sfTexture_createFromFile("assets/key.png",
                                    NULL)};
    sfSprite_setTexture(game->player.target.key, game->player.target.key_t, 0);
    sfSprite_setPosition(game->player.target.key, (sfVector2f){700, 900});
    game->player.quest = 1;
    sfSprite_setScale(game->player.target.key, (sfVector2f){0.1, 0.1});
}