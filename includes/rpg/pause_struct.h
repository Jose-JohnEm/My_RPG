/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pause_struct.h
*/

#include "rpg.h"

#ifndef PAUSE_CONTENT_H
#define PAUSE_CONTENT_H

typedef struct g_pause
{
    sfSprite *shade;
    sfSprite *coin;
    sfTexture *shade_t;
    sfTexture *coin_t;
    sfText *pause;
    sfText *continu;
    sfText *menu;
    sfText *exit;
    int shade_factor;
} g_pause;

#endif