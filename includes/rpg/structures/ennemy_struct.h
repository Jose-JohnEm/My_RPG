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
#define MONSTERS 2

typedef struct g_ennemy
{
    char type;
    int pv;
    vec4 pos;
    sfSprite *mob;
    sfTexture *mob_t;
} g_ennemy;

#endif