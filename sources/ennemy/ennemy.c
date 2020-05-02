/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** ennemy.c
*/

#include "rpg.h"

int is_hitting(sfVector2f u_pos, sfVector2f e_pos)
{
    if (e_pos.y + 100 > u_pos.y && e_pos.y - 100 < u_pos.y)
        if (e_pos.x + 100 > u_pos.x && e_pos.x - 100 < u_pos.x)
            return 1;
    return 0;
}

void does_hit(game_t *game)
{
    sfVector2f u_pos = sfSprite_getPosition(game->animation->perso);
    sfVector2f e_pos;
    sfVector2i map = game->map->position;
    vec4 mob;

    for (int i = 0; i < MONSTERS; i++) {
        e_pos = sfSprite_getPosition(game->ennemy[i].mob);
        mob = game->ennemy[i].pos;
        if (game->ennemy[i].type == BAD_GIRL && mob.x1 + 1 == map.x && mob.y1 + 1 == map.y && game->ennemy[i].pv > 0) {
            bad_girl_pattern(game, i);
        }
        if (is_hitting(u_pos, e_pos) && mob.x1 + 1 == map.x && mob.y1 + 1 == map.y) {
            game->player.hp -= 1;
        }
    }
}

void ennemy_display(g_ennemy *mob, sfRenderWindow **win, sfVector2i pos)
{
    for (int i = 0; i < MONSTERS; i++) {
        if (mob[i].pos.x1 + 1 == pos.x && mob[i].pos.y1 + 1 == pos.y && mob[i].pv > 0)
            sfRenderWindow_drawSprite(*win, mob[i].mob, NULL);
        if (mob[i].pv == 0)
            sfSprite_setPosition(mob[i].mob, (sfVector2f){2000, 2000});
    }
}

void ennemy(game_t *game)
{
    ennemy_display(game->ennemy, &game->window, game->map->position);
    does_hit(game);
}