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

int should_collide(int y, int x, sfVector2f pos_u)
{
    if (pos_u.y > (SQ_U + y * 90) - 25 && pos_u.y < (SQ_U + (y + 1) * 90) + 25)
        if (pos_u.x > (SQ_L + x * 90) - 25
            && pos_u.x < (SQ_L + (x + 1) * 90) + 25)
            return 1;
    return 0;
}

void check_hitting(game_t *game)
{
    vec4 cur;
    sfVector2f a_pos = sfSprite_getPosition(game->animation->arrow);

    for (int i = 0; i < MONSTERS; i++) {
        
    }
}

void check_collision(game_t *game)
{
    char way = game->animation->way;
    sfVector2f pos_u = sfSprite_getPosition(game->animation->perso);
    char **pos_c = game->map->collides;
    int zone = (game->map->position.y - 1) * 7 + game->map->position.x - 1;

    for (int i = 0; pos_c[i] != NULL; i++) {
        if ((pos_c[i][0] - '0') * 7 + pos_c[i][1] - '0' == zone)
            if (should_collide(pos_c[i][3] - '0', pos_c[i][4] - '0', pos_u)) {
                apply_collide(&game->animation->perso, way);
                return;
            }
    }
}