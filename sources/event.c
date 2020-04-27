/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** event.c
*/

#include "rpg.h"

void close_event(game_t *game)
{
    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
}

void event_inventory(game_t *game)
{
    if (game->event.type == sfEvtKeyPressed
        && game->event.key.code == sfKeyI) {
        if (game->player.inv_open == 0)
            game->player.inv_open = 1;
        if (game->player.inv_open == 1)
            game->player.inv_open = 0;
    }
}

void window_event(game_t *game, menu_t *menu)
{
    while (sfRenderWindow_pollEvent(game->window, &game->event)) {
        close_event(game);
        if (game->event.type == sfEvtMouseButtonPressed
            && game->event.mouseButton.button == sfMouseLeft) {
            play_or_stop_sound(game, menu);
            click_for_exit(game, menu);
            start_game(game, menu);
        }
        if (game->game == 1)
            event_inventory(game);
        skip_intro(game);
    }
}