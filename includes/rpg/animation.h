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
g_anim *init_animation(void);
int is_arrow_key(sfKeyCode key);
void display_anim_sets(g_anim **anim, sfRenderWindow **win, int first);


/*----- select_rect.c -----*/
int clock(sfClock *clock, int *l);
void select_rect_x(g_anim **anim, int ism);
void select_rect_y(g_anim **anim, int ism);
void translate_top(g_anim **anim);
void check_way_arrow(game_t *g, char way);

#endif