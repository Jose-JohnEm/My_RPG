/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** mob_pattern.c
*/

#include "rpg.h"

void check_for_player(g_ennemy *mob, g_anim *user, player_t *p)
{
    sfVector2f s_pos[5] = {sfSprite_getPosition(mob->attack.up),     \
                            sfSprite_getPosition(mob->attack.down),  \
                            sfSprite_getPosition(mob->attack.left),  \
                            sfSprite_getPosition(mob->attack.right), \
                            0};
    sfVector2f u_pos = sfSprite_getPosition(user->perso);

    for (int i = 0; i < 4; i++)
        if (s_pos[i].y - 50 > u_pos.y - 100 && s_pos[i].y - 50 < u_pos.y + 100)
            if (s_pos[i].x - 150 > u_pos.x - 100 && s_pos[i].x - 150 < u_pos.x + 100)
                p->hp -= 2;
}

void bad_girl_pattern(game_t *g, int i)
{
    static int way = -1;
    float time = sfTime_asSeconds(sfClock_getElapsedTime(g->ennemy[i].clock));

    if (way == -1 && time >= 4) {
        sfClock_restart(g->ennemy[i].clock);
        way = (rand() % 4) + 1;
        time = sfTime_asSeconds(sfClock_getElapsedTime(g->ennemy[i].clock));
    } else if (time < 2) {
        if (way == DOWN || way == UP) {
            if (way == DOWN)
                sfSprite_move(g->ennemy[i].mob, (sfVector2f){0, 5});
            if (way == UP)
                sfSprite_move(g->ennemy[i].mob, (sfVector2f){0, -5});
        } else if (way == RIGHT || way == LEFT) {
            if (way == RIGHT)
                sfSprite_move(g->ennemy[i].mob, (sfVector2f){5, 0});
            if (way == LEFT)
                sfSprite_move(g->ennemy[i].mob, (sfVector2f){-5, 0});
        }
    } else if (time >= 2) {
        way = -1;
        g->ennemy[i] = bad_girl_attack(g->ennemy[i], &g->window);
        check_for_player(&g->ennemy[i], g->animation, &g->player);
    }
}