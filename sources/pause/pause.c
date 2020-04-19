/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pause.c
*/

#include <stdio.h>

#include "rpg.h"

void cursor_position(sfRenderWindow *window)
{

}

void pause_caption(sfRenderWindow **window, sfEvent event, g_pause *content, int *i_p)
{
    if (event.key.type == 4 && event.key.code == 27 && *i_p == 1) {
        init_pause_content(content, *window);
        *i_p = 2;
        pause_animation(content, *window, *i_p);
        printf("Displayed\n");
        return;
    } else if (event.key.type == 4 && event.key.code == 27 && *i_p == 2) {
        *i_p = 1;
        pause_animation(content, *window, *i_p);
        erase_pause_content(content);
        printf("Deleted\n");
        return;
    } else if (*i_p == 2) {
        display_pause(*window, content, 0);
    }
}

void draw_pause(game_t *game)
{
    pause_caption(&game->window, game->event, &game->content, &game->game);
}