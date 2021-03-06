/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** destroy.c
*/

#include "rpg.h"

void my_destroy(game_t *game)
{
    sfMusic_destroy(game->sound.music);
    sfMusic_destroy(game->sound.end);
    sfMusic_destroy(game->sound.gameover);
    sfMusic_destroy(game->player.expsound);
    sfMusic_destroy(game->intro.music);
    sfMusic_destroy(game->music);
    sfRenderWindow_close(game->window);
    sfRenderWindow_destroy(game->window);
}