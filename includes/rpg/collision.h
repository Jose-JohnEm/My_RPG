/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** collision.h
*/

#include "rpg.h"

#ifndef COLLISION_H
#define COLLISION_H

/* -------- collision.c ------- */
void check_collision(game_t *game);
int should_collide(int x, int y, sfVector2f pos_u);
void apply_collide(sfSprite **user, char way);


/* ---- collide_settings.c ---- */
void set_collide(int **col, sfVector2i p1, sfVector2i p2);
void unset_collide(int ***col, sfVector2i p1, sfVector2i p2);
int *my_pos_desalloc(int *pos, int place);
int *my_pos_realloc(int **pos);
int len_int(int *list);


/* ---- init_collide.c ---- */
int **init_collide(void);


#endif