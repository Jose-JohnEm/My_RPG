/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** select_rect.c
*/

#include "rpg.h"

int clock_gestion(sfClock **clock, int l)
{
    float time = sfTime_asSeconds(sfClock_getElapsedTime(*clock));

    if (time > 0.10) {
        l++;
        sfClock_restart(*clock);
    }
    if (l > 3)
        l = 0;
    return l;
}

void select_rect_x(g_anim **anim, int ism)
{
    static int l = 0;
    static char cl_ok = 0;

    if (cl_ok == 0) {
        (*anim)->clock = sfClock_create();
        cl_ok++;
    }
    l = clock_gestion(&(*anim)->clock, l);
    if (ism == 1)
        (*anim)->rect.left = 420 + l * XRECT;
    else
        (*anim)->rect.left = 30 + l * (XRECT - 4);
}

void translate_top(g_anim **anim)
{
    if ((*anim)->way == DOWN)
        (*anim)->way = 0;
    else if ((*anim)->way == RIGHT)
        (*anim)->way = 1;
    else if ((*anim)->way == LEFT)
        (*anim)->way = 2;
}

void select_rect_y(g_anim **anim, int ism)
{
    if (ism)
        translate_top(anim);
    (*anim)->rect.top = 35 + (*anim)->way * YRECT;
}