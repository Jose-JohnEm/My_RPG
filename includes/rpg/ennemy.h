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


/*------ bad_girl_pattern.c ------*/
void bad_girl_pattern(game_t *g, int i);

/*------ mob_attack.c ------*/
g_ennemy bad_girl_attack(g_ennemy mob, sfRenderWindow **win);
void skull_axe_attack(g_ennemy *mob, sfSprite *user, sfRenderWindow **win);


/*------ animate_mob.c ------*/


#endif