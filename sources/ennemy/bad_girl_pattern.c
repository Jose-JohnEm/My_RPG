/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** mob_pattern.c
*/

#include "rpg.h"

void bad_girl_pattern(game_t *g, int i)
{
    static int way = -1;
    float time = sfTime_asSeconds(sfClock_getElapsedTime(g->ennemy[i].clock));

    if (way == -1 && time >= 3) {
        sfClock_restart(g->ennemy[i].clock);
        way = (rand() % 4) + 1;
        time = sfTime_asSeconds(sfClock_getElapsedTime(g->ennemy[i].clock));
    } else if (time < 1) {
        if (way == DOWN || way == UP) {
            if (way == DOWN)
                sfSprite_move(g->ennemy[i].mob, (sfVector2f){0, 10});
            if (way == UP)
                sfSprite_move(g->ennemy[i].mob, (sfVector2f){0, -10});
        } else if (way == RIGHT || way == LEFT) {
            if (way == RIGHT)
                sfSprite_move(g->ennemy[i].mob, (sfVector2f){10, 0});
            if (way == LEFT)
                sfSprite_move(g->ennemy[i].mob, (sfVector2f){-10, 0});
        }
    } else if (time >= 1) {
        way = -1;
        g->ennemy[i] = bad_girl_attack(g->ennemy[i], &g->window);
    }
    printf("%f %d\n", time, way);
}