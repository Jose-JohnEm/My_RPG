/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collision.c
*/

#include "rpg.h"

void apply_collide(sfSprite **user, char way)
{
    sfVector2f move = {0, 0};

    if (way == 0)
        move.y -= 10;
    if (way == 1)
        move.x -= 10;
    if (way == 2)
        move.x += 10;
    if (way == 3)
        move.y += 10;
    sfSprite_move(*user, move);
}

int should_collide(int x, int y, sfVector2f pos_u)
{
    if (pos_u.y > SQ_U + y * 90 && pos_u.y < SQ_U + (y + 1) * 90)
        if (pos_u.x > SQ_L + x * 90 && pos_u.x < SQ_L + (x + 1) * 90)
            return 1;
    return 0;
}

void check_collision(game_t *game)
{
    char way = game->animation->way;
    sfVector2f pos_u = sfSprite_getPosition(game->animation->perso);
    int **pos_c = game->map->collides;
    int zone = (game->map->position.y - 1) * 7 + game->map->position.x - 1;

    for (int i = 0; pos_c[zone][i] != -1; i++) {
        if (should_collide(pos_c[zone][i] / 7, pos_c[zone][i] % 7, pos_u))
            apply_collide(&game->animation->perso, way);
        printf("%d\n", i);
    }
}