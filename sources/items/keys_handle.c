/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** keys_handle.c
*/

#include "rpg.h"

void disp_first_key(game_t *g)
{
    sfVector2i pos = g->map->position;
    sfVector2f u_pos = sfSprite_getPosition(g->animation->perso);

    if (pos.x == 1 && pos.y == 7 && g->player.target.sk_bow >= 10) {
        sfRenderWindow_drawSprite(g->window, g->player.target.key, NULL);
        if (u_pos.x + 50 > 700 && u_pos.x + 50 < 800)
            if (u_pos.y + 50 > 800 && u_pos.y + 50 > 900) {
                sfSprite_setPosition(g->player.target.key, (sfVector2f) {-1000, -1000});
                g->player.quest = 2;
            }
    }
}

void keys_handle(game_t *g)
{
    if (g->player.quest == 1)
        disp_first_key(g);
}