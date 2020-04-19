/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pause.c
*/

#include <stdio.h>

#include "rpg.h"

void pause_caption(sfRenderWindow **window, sfEvent event, g_pause *content, int *i_p)
{
    if (event.key.type == 4 && event.key.code == 27 && *i_p == 1) {
        display_shade(content, *window);
        *i_p = 2;
        pause_animation(content, *i_p);
        printf("Displayed\n");
        return;
    } else if (event.key.type == 4 && event.key.code == 27 && *i_p == 2) {
        erase_shade(content);
        *i_p = 1;
        pause_animation(content, *i_p);
        printf("Deleted\n");
        return;
    } else if (*i_p == 2) {
        display_pause(*window, content);
    }
}

void draw_pause(game_t *game)
{
    pause_caption(&game->window, game->event, &game->content, &game->game);
}