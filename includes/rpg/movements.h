/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** movements.h
*/

#include "rpg.h"

#ifndef MOVEMENTS_H
#define MOVEMENTS_H

#define SQ_L 400
#define SQ_R 1300
#define SQ_U 50
#define SQ_D 950

/* ------- move.c ------- */
void move_perso(game_t *game);
int move_map(game_t *game, sfVector2i wanted);
sfVector2i move_perso_in_map(game_t *game);
sfVector2f move_in_wanted_zone(sfVector2i wanted);

#endif