/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** ennemy_struct.h
*/

#include "rpg.h"

#ifndef ENNEMY_STRUCT_H
#define ENNEMY_STRUCT_H

#define SKULL_BOW 1
#define SKULL_AXE 2
#define BAD_GIRL 3

#define MONSTERS 17

typedef struct a_bad_girl
{
    sfSprite *up;
    sfSprite *down;
    sfSprite *left;
    sfSprite *right;
    sfTexture *texture;
} a_bad_girl;

typedef struct a_sk_bow
{
    sfSprite *arr;
    sfTexture *arr_t;
    sfClock *clock;
    int launched;
} a_sk_bow;

typedef struct g_ennemy
{
    char type;
    int pv;
    vec4 pos;
    sfSprite *mob;
    sfTexture *mob_t;
    sfIntRect rect;
    sfClock *clock;
    a_bad_girl attack;
    a_sk_bow sk_attack;
} g_ennemy;

#endif