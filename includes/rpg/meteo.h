/*
** EPITECH PROJECT, 2019
** all
** File description:
** paqs
*/

#include "rpg.h"

#ifndef METEO_H
#define METEO_H

void init_meteo(pluie_t *p, neige_t *n);
void pluie(game_t *win, pluie_t *p);
void neige(game_t *win, neige_t *n);
void destroy_meteo(game_t *win, pluie_t *p, neige_t *n);
void  gen_time(game_t *win);

#endif