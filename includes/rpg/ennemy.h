/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** ennemy.h
*/

#include "rpg.h"

#ifndef ENNEMY_H
#define ENNEMY_H

/*-------- ennemy.c ---------*/
void ennemy(game_t *game);


/*------ init_ennemy.c ------*/
g_ennemy *init_ennemy(void);


/*------ init_ennemy_attack.c ------*/
a_bad_girl init_bad_girl_attack();
a_sk_bow init_skull_bow_attack();


/*------ bad_girl_pattern.c ------*/
void check_for_player(g_ennemy *mob, g_anim *user, player_t *p);
void bad_girl_pattern(game_t *g, int i);


/*------ bad_girl_pattern.c ------*/
void skull_bow_attack(game_t *game, int i);
void skull_launch_arrow(a_sk_bow *attack, char way,
                        sfRenderWindow **win, sfSprite *ennemy);


/*------ mob_attack.c ------*/
g_ennemy bad_girl_attack(g_ennemy mob, sfRenderWindow **win);
void skull_axe_attack(game_t *game, int i);


/*------ wait_for_new_attack.c ------*/
void restart_clock_attack_sk_bow(sfClock **clock, int *ok, char *way);


#endif