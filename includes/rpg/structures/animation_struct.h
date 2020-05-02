/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animation_struct.h
*/

#include "rpg.h"

#ifndef ANIM_STRUCT_H
#define ANIM_STRUCT_H

#define UP 3
#define RIGHT 2
#define DOWN 4
#define LEFT 1

#define XRECT 85
#define YRECT 105

typedef struct g_anim
{
    sfSprite *perso;
    sfTexture *perso_t;
    sfIntRect rect;
    char way;
    sfClock *clock;
    sfSprite *arrow;
    sfTexture *arrow_t;
    sfClock *cl_a;
} g_anim;

#endif