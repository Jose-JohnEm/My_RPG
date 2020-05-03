/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** end.c
*/

#include "rpg.h"

void init_game_over(game_t *game, menu_t *menu)
{
    menu->t_logo = sfTexture_createFromFile("assets/game_over.png", NULL);
    menu->t_bg = sfTexture_createFromFile("assets/gameover.jpg", NULL);
    menu->logo = sfSprite_create();
    sfSprite_setTexture(menu->logo, menu->t_logo, sfTrue);
}

void init_end(game_t *game, menu_t *menu)
{
    menu->t_logo = sfTexture_createFromFile("assets/logo.png", NULL);
    menu->logo = sfSprite_create();
    sfSprite_setTexture(menu->logo, menu->t_logo, sfTrue);
}

void is_finish(game_t *game, menu_t *menu)
{
    sfVector2f player = sfSprite_getPosition(game->animation->perso);
    sfVector2i map = game->map->position;
    vec4 playermap = {1, 1, 3, 5};

    if (playermap.x1 == map.x && playermap.y1 == map.y) {
        if (game->player.quest == 4)
            game->game = -1;
    }
}

void draw_end(game_t *game, menu_t *menu)
{
    if (game->game == -1) {
        init_end(game, menu);
    }
    if (game->game == -2) {
        init_game_over(game, menu);
    }
    sfText_setPosition(game->hud.textlvl, (sfVector2f){800, 600});
    sfSprite_setPosition(menu->logo, (sfVector2f){700, 100});
    sfText_setPosition(menu->hud.score, (sfVector2f){580, 600});
    sfRenderWindow_drawSprite(game->window, menu->bg, NULL);
    draw_cloud(game);
    sfRenderWindow_drawSprite(game->window, menu->logo, NULL);
    sfRenderWindow_drawText(game->window, menu->hud.score, NULL);
    sfRenderWindow_drawText(game->window, game->hud.textlvl, NULL);
}