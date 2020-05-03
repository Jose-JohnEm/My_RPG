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

void grow_up_kill(game_t *g, char type, int *pv, int i)
{
    if (*pv <= 0 && *pv > -50 && type == SKULL_BOW) {
        g->player.target.sk_bow++;
        *pv = -100;
        sfSprite_setPosition(g->ennemy[i].mob, (sfVector2f){2000, 2000});
    }
}

void check_hitting(game_t *g)
{
    vec4 cur;
    sfVector2f a_pos = sfSprite_getPosition(g->animation->arrow);
    sfVector2f e_pos;
    sfVector2i m_pos = g->map->position;

    for (int i = 0; i < MONSTERS; i++) {
        e_pos = sfSprite_getPosition(g->ennemy[i].mob);
        cur = g->ennemy[i].pos;
        if (cur.x1 + 1 == m_pos.x && cur.y1 + 1 == m_pos.y && a_pos.y + 50 > e_pos.y && a_pos.y + 50 < e_pos.y + 200)
            if (a_pos.x + 50 > e_pos.x && a_pos.x + 50 < e_pos.x + 200) {
                g->ennemy[i].pv -= 5;
                sfSprite_setPosition(g->animation->arrow, (sfVector2f){3000, 3000});
                grow_up_kill(g, g->ennemy[i].type, &g->ennemy[i].pv, i);
            }
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