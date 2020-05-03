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
void check_hitting(game_t *game);


/* ---- collide_settings.c ---- */
char **set_collide(char **col, vec4 pos);
char **unset_collide(char **col, vec4 pos);
int my_strcmp(char const *s1, char const *s2);
void my_strcpy(char *s1, char const *s2);
char *my_strdup(char *str);


/* ---- set_map_collision ---- */
void set_col1(game_t *game);
void set_col2(game_t *game);
void set_col3(game_t *game);
void set_col4(game_t *game);
void set_col5(game_t *game);
void set_col6(game_t *game);
void set_col7(game_t *game);
void set_col8(game_t *game);
void set_col9(game_t *game);
void set_col10(game_t *game);
void set_col11(game_t *game);
void set_col12(game_t *game);
void set_col13(game_t *game);

void big_map_collision_setter(game_t *game);

#endif