/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** hud.c
*/

#include "rpg.h"

void init_hud(game_t *game)
{
    game->hud.t_fullhp = sfTexture_createFromFile("assets/hpfull.png", NULL);
    game->hud.t_hp = sfTexture_createFromFile("assets/hp.png", NULL);
    game->hud.t_isalive = sfTexture_createFromFile("assets/alive.png", NULL);
    game->hud.fullhp = sfSprite_create();
    game->hud.hp = sfSprite_create();
    game->hud.is_alive = sfSprite_create();
    sfSprite_setTexture(game->hud.fullhp, game->hud.t_fullhp, sfTrue);
    sfSprite_setTexture(game->hud.hp, game->hud.t_hp, sfTrue);
    sfSprite_setTexture(game->hud.is_alive, game->hud.t_isalive, sfTrue);
}

void set_hpbar(game_t *game)
{
    if (game->player.hp == 0)
        sfSprite_setTextureRect(game->hud.fullhp, (sfIntRect){0, 0, 0, 53});
    if (game->player.hp == 25)
        sfSprite_setTextureRect(game->hud.fullhp, (sfIntRect){0, 0, 90, 53});
    if (game->player.hp == 50)
        sfSprite_setTextureRect(game->hud.fullhp, (sfIntRect){0, 0, 145, 53});
    if (game->player.hp == 75)
        sfSprite_setTextureRect(game->hud.fullhp, (sfIntRect){0, 0, 200, 53});
    if (game->player.hp == 100)
        sfSprite_setTextureRect(game->hud.fullhp, (sfIntRect){0, 0, 271, 53});
}

void draw_hud(game_t *game)
{
    set_hpbar(game);
    sfSprite_setPosition(game->hud.fullhp, (sfVector2f){1600, 10});
    sfSprite_setPosition(game->hud.hp, (sfVector2f){1600, 10});
    sfSprite_setPosition(game->hud.is_alive, (sfVector2f){1510, 7});
    sfRenderWindow_drawSprite(game->window, game->hud.hp, NULL);
    sfRenderWindow_drawSprite(game->window, game->hud.fullhp, NULL);
    sfRenderWindow_drawSprite(game->window, game->hud.is_alive, NULL);
}