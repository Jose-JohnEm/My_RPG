/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animation.h
*/

#include "rpg.h"

#ifndef ANIMATION_H
#define ANIMATION_H


/*------ animation.c ------*/
void animation(game_t *game);
void init_animation(g_anim **anim);
int is_arrow_key(sfKeyCode key);
void display_anim_sets(g_anim **anim, sfRenderWindow **win);


/*----- select_rect.c -----*/
sfClock *clock(sfClock *clock, int *l);
void select_rect_x(g_anim **anim, int ism);
void translate_top(g_anim **anim);
void select_rect_y(g_anim **anim);


#endif