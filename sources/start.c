/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** start.c
*/

#include "rpg.h"

void start_game(game_t *game, menu_t *menu)
{
    sfVector2f pos = sfSprite_getPosition(menu->play);
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);

    if (mouse_pos.x >= (int)pos.x && mouse_pos.x <= ((int)pos.x + 361) &&
        mouse_pos.y >= ((int)pos.y) && mouse_pos.y <= ((int)pos.y + 110)) {
        if (game->game == 0)
            game->game = 1;
    }

}