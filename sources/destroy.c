/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** destroy.c
*/

#include "rpg.h"

void my_destroy(game_t *game)
{


    destroy_meteo(game, &game->pluie, &game->neige);
    sfMusic_destroy(game->music);
    sfRenderWindow_close(game->window);
    sfRenderWindow_destroy(game->window);
}