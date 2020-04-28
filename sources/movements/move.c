/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** move.c
*/

#include "rpg.h"

void move_perso(game_t *game)
{
    char way = game->animation->way;
    sfVector2f new = {0, 0};

    if (way == 0 || way == 3) {
        new.y = ((way - 1.5) / -1.5) * 10;
        sfSprite_move(game->animation->perso, new);
    } else {
        new.x = ((way - 1.5) / -0.5) * 10;
        sfSprite_move(game->animation->perso, new);
    }
}