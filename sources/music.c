/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** music.c
*/

#include "rpg.h"

void sound_button_effect(game_t *game, menu_t *menu)
{
    sfVector2f pos = sfSprite_getPosition(menu->soundicon);
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);

    if (mouse_pos.x >= (int)pos.x && mouse_pos.x <= ((int)pos.x + 164) &&
        mouse_pos.y >= (int)pos.y && mouse_pos.y <= ((int)pos.y + 140)) {
        sfSprite_setScale(menu->soundicon, (sfVector2f){1, 1});
        sfSprite_setPosition(menu->soundicon, (sfVector2f){15, 890});
    } else
        sfSprite_setScale(menu->soundicon, (sfVector2f){0.9, 0.9});
}

void play_or_stop_sound(game_t *game, menu_t *menu)
{
    sfVector2f pos = sfSprite_getPosition(menu->soundicon);
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);

    if (mouse_pos.x >= (int)pos.x && mouse_pos.x <= ((int)pos.x + 164) &&
        mouse_pos.y >= (int)pos.y && mouse_pos.y <= ((int)pos.y + 140)) {
        if (game->mute == 0 && game->game != 1) {
            sfMusic_pause(game->music);
            game->mute = 1;
        }
        else if (game->mute == 1 && game->game != 1) {
            sfMusic_play(game->music);
            game->mute = 0;
        }
    }
}