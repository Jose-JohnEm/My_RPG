/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** sound.c
*/

#include "rpg.h"

void init_sound(game_t *game)
{
    game->sound.end = sfMusic_createFromFile("assets/end.ogg");
    game->sound.gameover = sfMusic_createFromFile("assets/gameover.ogg");
    game->sound.boss = sfMusic_createFromFile("assets/boss.ogg");
}

void sound_handling(game_t *game)
{
    if (game->game == 0)
        sfMusic_play(game->music);
    if (game->game == 1) {
        //sfMusic_play(sound)
    }
    if (game->game == 3) {
        sfMusic_play(game->sound.gameover);
        //sfMusic_stop(sound)
    }
    if (game->game == -1) {
        sfMusic_play(game->sound.end);
        //sfMusic_stop(sound)
    }
    if (game->game == -2) {
        sfMusic_play(game->sound.gameover);
        //sfMusic_stop(sound)
    }
}