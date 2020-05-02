/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init.c
*/

#include "rpg.h"

void rpg(game_t *game, menu_t *menu)
{
    srand(1000);
    game->clock = sfClock_create();
    game->seconds = sfSeconds(0.1).microseconds;
    init_menu(game, menu);
    init_cloud(game);
    init_inventory(game);
    init_map(&game->map);
    init_player(game);
    init_hud(game);
    game->ennemy = init_ennemy();
    game->animation = init_animation();
    game->event.key.code = sfKeyDown;
    map_col();
}

void init_text(menu_t *menu)
{
    menu->hud.f_lvl = sfFont_createFromFile("assets/score.ttf");
    menu->hud.textlvl = sfText_create();
    menu->hud.score = sfText_create();
    sfText_setString(menu->hud.textlvl, "LVL : 1");
    sfText_setFont(menu->hud.textlvl, menu->hud.f_lvl);
    sfText_setString(menu->hud.score, "SCORE : 5403");
    sfText_setFont(menu->hud.score, menu->hud.f_lvl);
    sfText_setCharacterSize(menu->hud.textlvl, 150);
    sfText_setCharacterSize(menu->hud.score, 150);
}

int init_rpg(void)
{
    sfVideoMode mode = {1920, 1080, 32};
    game_t game;
    menu_t menu;

    game.window = sfRenderWindow_create(mode, "MY_RPG",
                                        sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(game.window, 30);
    game.game = 0;
    game.mute = 0;
    game.player.hp = 5;
    game.music = sfMusic_createFromFile("assets/sound.ogg");
    if (set_parameters(&game) == -1)
        return -1;
    init_text(&menu);
    init_intro(&game);
    rpg(&game, &menu);
    create_window(&game, &menu);
    return 0;
}