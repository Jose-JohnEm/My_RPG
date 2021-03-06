/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init.c
*/

#include "rpg.h"

void rpg(game_t *game, menu_t *menu)
{
    srand(2454351);
    game->clock = sfClock_create();
    game->seconds = sfSeconds(0.1).microseconds;
    init_menu(game, menu);
    init_cloud(game);
    init_inventory(game);
    init_map(&game->map);
    init_player(game);
    init_hud(game);
    init_lvlup(game);
    init_msgbox(game);
    init_pnjs(game);
    game->ennemy = init_ennemy();
    game->animation = init_animation();
    game->event.key.code = sfKeyDown;
    big_map_collision_setter(game);
    init_meteo(&game->pluie, &game->neige);
}

void init_text(menu_t *menu)
{
    menu->hud.f_lvl = sfFont_createFromFile("assets/score.ttf");
    menu->hud.score = sfText_create();
    sfText_setString(menu->hud.score,
        "LEVEL\n\nWell played ! Hope you enjoyed");
    sfText_setFont(menu->hud.score, menu->hud.f_lvl);
    sfText_setCharacterSize(menu->hud.score, 50);
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
    init_sound(&game);
    init_intro(&game);
    rpg(&game, &menu);
    create_window(&game, &menu);
    return 0;
}