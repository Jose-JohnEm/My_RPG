/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** menu.c
*/

#include "rpg.h"

void create_menu_sprite(game_t *game, menu_t *menu)
{
    menu->t_title = sfTexture_createFromFile("assets/logo.png", NULL);
    menu->t_soundicon = sfTexture_createFromFile("assets/sound.png", NULL);
    menu->t_button = sfTexture_createFromFile("assets/htoplay.png", NULL);
    menu->t_exit = sfTexture_createFromFile("assets/exit.png", NULL);
    menu->t_bg = sfTexture_createFromFile("assets/menu_bg.jpg", NULL);
    menu->t_play = sfTexture_createFromFile("assets/play.png", NULL);
    menu->soundicon = sfSprite_create();
    menu->button = sfSprite_create();
    menu->exit = sfSprite_create();
    menu->title = sfSprite_create();
    menu->bg = sfSprite_create();
    menu->play = sfSprite_create();
}

void init_menu(game_t *game, menu_t *menu)
{
    create_menu_sprite(game, menu);
    sfSprite_setTexture(menu->button, menu->t_button, sfTrue);
    sfSprite_setTexture(menu->soundicon, menu->t_soundicon, sfTrue);
    sfSprite_setTexture(menu->title, menu->t_title, sfTrue);
    sfSprite_setTexture(menu->exit, menu->t_exit, sfTrue);
    sfSprite_setTexture(menu->bg, menu->t_bg, sfTrue);
    sfSprite_setTexture(menu->play, menu->t_play, sfTrue);
}

void make_button_effect(game_t *game, menu_t *menu)
{
    sfVector2f pos = sfSprite_getPosition(menu->button);
    sfVector2f exit_pos = sfSprite_getPosition(menu->exit);
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);

    if (mouse_pos.x >= (int)pos.x && mouse_pos.x <= ((int)pos.x + 360) &&
        mouse_pos.y >= (int)pos.y && mouse_pos.y <= ((int)pos.y + 110)) {
        sfSprite_setScale(menu->button, (sfVector2f){1.1, 1.1});
        sfSprite_setPosition(menu->button, (sfVector2f){730, 750});
    } else
        sfSprite_setScale(menu->button, (sfVector2f){1, 1});
    if (mouse_pos.x >= (int)exit_pos.x
        && mouse_pos.x <= ((int)exit_pos.x + 360)
        && mouse_pos.y >= (int)exit_pos.y
        && mouse_pos.y <= ((int)exit_pos.y + 110)) {
        sfSprite_setScale(menu->exit, (sfVector2f){1.1, 1.1});
        sfSprite_setPosition(menu->exit, (sfVector2f){730, 900});
    } else
        sfSprite_setScale(menu->exit, (sfVector2f){1, 1});
}

void menu_buttons(game_t *game, menu_t *menu)
{
    sfVector2f pos = sfSprite_getPosition(menu->play);
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(game->window);

    if (mouse_pos.x >= (int)pos.x && mouse_pos.x <= ((int)pos.x + 360) &&
        mouse_pos.y >= (int)pos.y && mouse_pos.y <= ((int)pos.y + 110)) {
        sfSprite_setScale(menu->play, (sfVector2f){1.1, 1.1});
        sfSprite_setPosition(menu->play, (sfVector2f){730, 600});
    } else
        sfSprite_setScale(menu->play, (sfVector2f){1, 1});
    sfSprite_setPosition(menu->button, (sfVector2f){750, 750});
    sfSprite_setPosition(menu->exit, (sfVector2f){750, 900});
    make_button_effect(game, menu);
    sound_button_effect(game, menu);
    sfRenderWindow_drawSprite(game->window, menu->exit, NULL);
}

void draw_menu(game_t *game, menu_t *menu)
{
    sfSprite_setPosition(menu->play, (sfVector2f){750, 600});
    sfSprite_setPosition(menu->title, (sfVector2f){720, 100});
    sfSprite_setPosition(menu->soundicon, (sfVector2f){25, 900});
    if (game->mute == 0);
        sfSprite_setTextureRect(menu->soundicon, (sfIntRect){0, 0, 175, 164});
    if (game->mute == 1)
        sfSprite_setTextureRect(menu->soundicon, (sfIntRect){177, 0, 165, 164});
    sfRenderWindow_drawSprite(game->window, menu->bg, NULL);
    draw_cloud(game);
    menu_buttons(game, menu);
    sfRenderWindow_drawSprite(game->window, menu->button, NULL);
    sfRenderWindow_drawSprite(game->window, menu->title, NULL);
    sfRenderWindow_drawSprite(game->window, menu->play, NULL);
    sfRenderWindow_drawSprite(game->window, menu->soundicon, NULL);
    sfClock_restart(game->intro.clock);
}