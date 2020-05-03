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
    game->sound.music = sfMusic_createFromFile("assets/music.ogg");
}