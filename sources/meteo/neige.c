/*
** EPITECH PROJECT, 2019
** neige.c
** File description:
** my_rpg
*/

#include "rpg.h"

void neige(game_t *win, neige_t *n)
{
    n->offset2.y += 0.01;
            if (n->offset2.y >= 1080) {
            n->offset2.y = 0;
            sfSprite_setPosition(n->spriteback2, n->offset2);
    }
    sfSprite_setPosition(n->spriteback2, n->offset2);
    sfRenderWindow_drawSprite(win->window, n->spriteback2, NULL);
}

void destroy_meteo(game_t *win, pluie_t *p, neige_t *n)
{
    sfSprite_destroy(n->spriteback2);
    sfSprite_destroy(p->spriteback1);
    sfRenderWindow_destroy(win->window);
}