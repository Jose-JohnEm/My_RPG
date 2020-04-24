/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** select_rect.c
*/

#include "rpg.h"

#include <stdio.h>

sfClock *clock_gestion(sfClock **clock, int *l)
{
    float time = sfTime_asSeconds(sfClock_getElapsedTime(*clock));

    if (time > 1) {
        *l++;
        sfClock_restart(*clock);
    }
    if (*l > 4)
        *l = 0;
    printf("%d\n", *l);
}

void select_rect_x(g_anim **anim, int ism)
{
    static int l = 0;
    static char cl_ok = 0;

    if (cl_ok == 0) {
        (*anim)->clock = sfClock_create();
        cl_ok++;
    }
    clock_gestion(&(*anim)->clock, &l);
    //printf("%d\n", l);

    if (ism == 1)
        (*anim)->rect.left = 400 + l * XRECT;
    else
        (*anim)->rect.left = 50 + l * XRECT;
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

    (*anim)->rect.top = 50 + (*anim)->way * YRECT;
}