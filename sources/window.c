/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** window.c
*/

#include "rpg.h"

void draw_window(game_t *game, menu_t *menu)
{
    if (game->game == 0) {
        draw_menu(game, menu);
    }
    if (game->game == -1 || game->game == -2)
        draw_end(game, menu);
    if (game->game == 1 || game->game == 2) {
        draw_pause(game);
        //draw_inventory(game);
        if (game->game == 1)
            animation(game);
    }
    if (game->game > 89) {
        draw_intro(game);
    }
    sfRenderWindow_display(game->window);
    sfRenderWindow_clear(game->window, sfBlack);
}

void create_window(game_t *game, menu_t *menu)
{
    sound_handling(game);
    while (sfRenderWindow_isOpen(game->window)) {
        window_event(game, menu);
        if (game->player.hp == 0)
            game->game = -2;
        draw_window(game, menu);
    }
    my_destroy(game);
    return;
}