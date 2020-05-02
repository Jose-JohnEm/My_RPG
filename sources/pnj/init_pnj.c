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
    game->pnj.quest = (vec4){1, 1, 0, 0};
    game->pnj.donjon = (vec4){1, 1, 1, 0};
    game->pnj.box = (vec4){0, 0, 2, 0};
    sfSprite_setPosition(game->pnj.pnjquest, (sfVector2f){SQ_L + game->pnj.quest.x2, SQ_U + game->pnj.quest.y2});
}

void disp_pnj(game_t *g)
{
    if (g->pnj.quest.x1 == g->map->position.x && g->pnj.quest.y1 == g->map->position.y)
        sfRenderWindow_drawSprite(g->window, g->pnj.pnjquest, NULL);
}

void init_pnjs(game_t *game)
{
    init_questpnj(game);
}