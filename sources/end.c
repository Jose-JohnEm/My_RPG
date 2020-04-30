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
    menu->logo = sfSprite_create();
    sfSprite_setTexture(menu->logo, menu->t_logo, sfTrue);
}

void init_end(game_t *game, menu_t *menu)
{
    menu->t_logo = sfTexture_createFromFile("assets/logo.png", NULL);
    menu->logo = sfSprite_create();
    sfSprite_setTexture(menu->logo, menu->t_logo, sfTrue);
}

void draw_end(game_t *game, menu_t *menu)
{
    if (game->game == -1)
        init_end(game, menu);
    if (game->game == -2)
        init_game_over(game, menu);
    sfSprite_setPosition(menu->logo, (sfVector2f){700, 100});
    sfSprite_setPosition(menu->soundicon, (sfVector2f){25, 900});
    sfText_setPosition(menu->hud.score, (sfVector2f){580, 600});
    if (game->mute == 0);
        sfSprite_setTextureRect(menu->soundicon, (sfIntRect){0, 0, 175, 164});
    if (game->mute == 1)
        sfSprite_setTextureRect(menu->soundicon, (sfIntRect){177, 0, 165, 164});
    sfRenderWindow_drawSprite(game->window, menu->bg, NULL);
    draw_cloud(game);
    sfRenderWindow_drawSprite(game->window, menu->logo, NULL);
    sfRenderWindow_drawText(game->window, menu->hud.score, NULL);
    sfRenderWindow_drawSprite(game->window, menu->soundicon, NULL);
}