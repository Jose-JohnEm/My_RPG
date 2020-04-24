/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** select_rect.c
*/

#include "rpg.h"

sfClock *clock_gestion(sfClock *clock, int *l)
{
    float time;

    if (clock == NULL) {
        clock = sfClock_create();
        sfClock_restart(clock);
    }
    time = sfTime_asSeconds(sfClock_getElapsedTime(clock));
    if (time > 0.25) {
        *l++;
        sfClock_restart(clock);
    }
    if (*l > 3)
        *l = 0;
}

void select_rect_x(g_anim **anim, int ism)
{
    static sfClock *clock;
    int l = 0;

    clock = clock_gestion(clock, &l);
    if (ism == 1)
        (*anim)->begin_r.left = 400;
    else
        (*anim)->begin_r.left = 10;
}

void translate_top(g_anim **anim)
{
    if ((*anim)->way == DOWN)
        (*anim)->way = 0;
    if ((*anim)->way == RIGHT)
        (*anim)->way = 1;
    if ((*anim)->way == LEFT)
        (*anim)->way = 2;
    if ((*anim)->way == UP)
        (*anim)->way = 3;
}

void select_rect_y(g_anim **anim)
{
    translate_top(anim);

    (*anim)->rect.top = 30 + (*anim)->way * 100;
}