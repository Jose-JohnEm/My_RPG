/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pnj.c
*/

#include "rpg.h"

void init_questpnj(game_t *game)
{
    game->pnj.t_pnjquest = sfTexture_createFromFile("assets/pnj3.png", NULL);
    game->pnj.pnjquest = sfSprite_create();
    sfSprite_setTexture(game->pnj.pnjquest, game->pnj.t_pnjquest, sfTrue);
    game->pnj.quest = (vec4){1, 1, 3, 5};
    game->pnj.donjon = (vec4){1, 1, 1, 0};
    game->pnj.box = (vec4){0, 0, 2, 0};
    set_col(0, 0, 4, 2)
    sfSprite_setPosition(game->pnj.pnjquest, (sfVector2f){SQ_L - 50 + game->pnj.quest.x2 * 90, SQ_U - 70 + game->pnj.quest.y2 * 90});
}

void init_pnjs(game_t *game)
{
    init_questpnj(game);
}