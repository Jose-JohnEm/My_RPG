/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** meteo_struct.h
*/

#include "rpg.h"

#ifndef METEO_STRUCT_H
#define METEO_STRUCT_H

typedef struct pluie_s pluie_t;
struct pluie_s {
    sfTexture* back1;
    sfVector2f offset;
    sfSprite* spriteback1;
};

typedef struct neige_s neige_t;
struct neige_s {
    sfTexture *back2;
    sfVector2f offset2;
    sfSprite *spriteback2;
};

#endif