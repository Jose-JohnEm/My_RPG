/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init.c
*/

#include "rpg.h"

void rpg(game_t *game, menu_t *menu)
{
    game->clock = sfClock_create();
    game->seconds = sfSeconds(0.1).microseconds;
    init_menu(game, menu);
    init_cloud(game);
    init_inventory(game);
    init_map(&game->map);
    game->animation = init_animation();
    game->event.key.code = sfKeyDown;
    set_collide(&game->map->collides, (sfVector2i){1, 1}, (sfVector2i){4, 4});
    set_collide(&game->map->collides, (sfVector2i){1, 1}, (sfVector2i){4, 5});
    set_collide(&game->map->collides, (sfVector2i){1, 1}, (sfVector2i){4, 6});
    set_collide(&game->map->collides, (sfVector2i){1, 1}, (sfVector2i){4, 7});

    set_collide(&game->map->collides, (sfVector2i){2, 2}, (sfVector2i){4, 4});
    set_collide(&game->map->collides, (sfVector2i){2, 2}, (sfVector2i){4, 5});
    set_collide(&game->map->collides, (sfVector2i){2, 2}, (sfVector2i){4, 6});
    set_collide(&game->map->collides, (sfVector2i){2, 2}, (sfVector2i){4, 7});
}

void init_text(menu_t *menu)
{
    menu->hud.f_score = sfFont_createFromFile("assets/score.ttf");
    menu->hud.score = sfText_create();
    menu->hud.text_mob = sfText_create();
    sfText_setString(menu->hud.score, "SCORE : 3452");
    sfText_setFont(menu->hud.score, menu->hud.f_score);
    sfText_setFont(menu->hud.text_mob, menu->hud.f_score);
    sfText_setCharacterSize(menu->hud.score, 150);
    sfText_setCharacterSize(menu->hud.text_mob, 80);
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