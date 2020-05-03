/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pnj.c
*/

#include "rpg.h"

void enable_pnjmsg(game_t *game)
{
    sfVector2f questpos = sfSprite_getPosition(game->pnj.pnjquest);
    sfVector2f player = sfSprite_getPosition(game->animation->perso);
    sfVector2i map = game->map->position;
    vec4 pnjquest = {1, 1, 3, 5};

    if (pnjquest.x1 == map.x && pnjquest.y1 == map.y) {
        if (player.x + 50 >= questpos.x - 50 && player.x <= questpos.x + 100
            && player.y + 50 >= questpos.y -50 && player.y + 50 <= questpos.y + 150)
            draw_msg(game);
    }
}

void draw_questpnj(game_t *game)
{
    enable_pnjmsg(game);
    if (game->pnj.quest.x1 == game->map->position.x 
        && game->pnj.quest.y1 == game->map->position.y)
        sfRenderWindow_drawSprite(game->window, game->pnj.pnjquest, NULL);
}
