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
    game->hud.f_lvl = sfFont_createFromFile("assets/score.ttf");
    game->hud.textlvl = sfText_create();
    sfText_setFont(game->hud.textlvl, game->hud.f_lvl);
    sfText_setCharacterSize(game->hud.textlvl, 50);
    sfText_setString(game->hud.textlvl, itoa(game->player.level));
}

void draw_hud(game_t *game)
{
    sfSprite_setTextureRect(game->hud.fullhp,
    (sfIntRect){0, 0, game->player.hp * 2.71, 53});
    sfSprite_setPosition(game->hud.fullhp, (sfVector2f){1650, 10});
    sfSprite_setPosition(game->hud.hp, (sfVector2f){1650, 10});
    sfSprite_setPosition(game->hud.is_alive, (sfVector2f){1510, 7});
    sfText_setPosition(game->hud.textlvl, (sfVector2f){1600, 10});
    sfRenderWindow_drawSprite(game->window, game->hud.hp, NULL);
    sfRenderWindow_drawSprite(game->window, game->hud.fullhp, NULL);
    sfRenderWindow_drawSprite(game->window, game->hud.is_alive, NULL);
    sfRenderWindow_drawText(game->window, game->hud.textlvl, NULL);
}