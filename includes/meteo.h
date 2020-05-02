/*
** EPITECH PROJECT, 2019
** all
** File description:
** paqs
*/

#include "rpg.h"

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

void init_meteo(pluie_t *p, neige_t *n);
void pluie(game_t *win, pluie_t *p);
void neige(game_t *win, neige_t *n);
void destroy_meteo(game_t *win, pluie_t *p, neige_t *n);