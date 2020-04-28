/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** map.c
*/

#include "rpg.h"

void collide_big_walls(game_t *game)
{
    sfVector2i m_p = game->map->position;
    sfVector2f u_p = sfSprite_getPosition(game->animation->perso);

    if (u_p.x < SQ_L + 70 && m_p.x == 1)
        sfSprite_move(game->animation->perso, (sfVector2f){10, 0});
    if (u_p.x > SQ_R && m_p.x == 5)
        sfSprite_move(game->animation->perso, (sfVector2f){-10, 0});
    if (u_p.y < SQ_U + 80 && m_p.y == 1)
        sfSprite_move(game->animation->perso, (sfVector2f){0, 10});
    if (u_p.y > SQ_D + 10 && m_p.y == 5)
        sfSprite_move(game->animation->perso, (sfVector2f){0, -10});
}

void collide_small_walls(game_t *game)
{
    sfVector2f u_p = sfSprite_getPosition(game->animation->perso);

    if (u_p.x < SQ_L - 30)
        sfSprite_move(game->animation->perso, (sfVector2f){10, 0});
    if (u_p.x > SQ_R)
        sfSprite_move(game->animation->perso, (sfVector2f){-10, 0});
    if (u_p.y < SQ_U - 30)
        sfSprite_move(game->animation->perso, (sfVector2f){0, 10});
    if (u_p.y > SQ_D + 10)
        sfSprite_move(game->animation->perso, (sfVector2f){0, -10});
}

void draw_map(game_t *game)
{
    if (!move_map(game, move_perso_in_map(game))) {
        collide_small_walls(game);
        collide_big_walls(game);
    }
    sfRenderWindow_drawSprite(game->window, game->map->map, NULL);
}