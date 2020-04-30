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
char **set_collide(char **col, vec4 pos);
char **unset_collide(char **col, vec4 pos);
int my_strcmp(char const *s1, char const *s2);
void my_strcpy(char *s1, char const *s2);
char *my_strdup(char *str);


/* ---- init_collide.c ---- */
int **init_collide(void);


#endif