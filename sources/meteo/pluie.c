/*
** EPITECH PROJECT, 2019
** pluie.c
** File description:
** my_rpg
*/

#include "rpg.h"

void init_meteo(pluie_t *p, neige_t *n)
{
    p->offset.x = 0;
    p->offset.y = 0;
    n->offset2.x = 0;
    n->offset2.y = -1080;

    p->back1 = sfTexture_createFromFile("assets/meteo/pluie.png", NULL);
    n->back2 = sfTexture_createFromFile("assets/meteo/neige.png", NULL);
    p->spriteback1 = sfSprite_create();
    n->spriteback2 = sfSprite_create();
    sfSprite_setTexture(p->spriteback1, p->back1, sfTrue);
    sfSprite_setTexture(n->spriteback2, n->back2, sfTrue);
}

void pluie(game_t *win, pluie_t *p)
{
    p->offset.x = p->offset.x - 1;
        if (p->offset.x <= -2048) {
            p->offset.x = 0;
            sfSprite_setPosition(p->spriteback1, p->offset);
    }
    sfSprite_setPosition(p->spriteback1, p->offset);
    sfRenderWindow_drawSprite(win->window, p->spriteback1, NULL);
}
