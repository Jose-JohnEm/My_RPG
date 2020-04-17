/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** cloud.c
*/

#include "rpg.h"

void init_cloud(game_t *game)
{
    game->cloud.tcloud_1 = sfTexture_createFromFile("assets/clouds1.png", NULL);
    game->cloud.tcloud_2 = sfTexture_createFromFile("assets/clouds2.png", NULL);
    game->cloud.tcloud_3 = sfTexture_createFromFile("assets/clouds3.png", NULL);
    game->cloud.cloud_1 = sfSprite_create();
    game->cloud.cloud_2 = sfSprite_create();
    game->cloud.cloud_3 = sfSprite_create();
    sfSprite_setTexture(game->cloud.cloud_1, game->cloud.tcloud_1, sfTrue);
    sfSprite_setTexture(game->cloud.cloud_2, game->cloud.tcloud_2, sfTrue);
    sfSprite_setTexture(game->cloud.cloud_3, game->cloud.tcloud_3, sfTrue);
}

void draw_cloud(game_t *game)
{
    sfVector2f cloud1_pos = sfSprite_getPosition(game->cloud.cloud_1);
    sfVector2f cloud2_pos = sfSprite_getPosition(game->cloud.cloud_2);
    sfVector2f cloud3_pos = sfSprite_getPosition(game->cloud.cloud_3);

    if (cloud1_pos.x == -2000)
        sfSprite_setPosition(game->cloud.cloud_1, (sfVector2f){1920, 0});
    sfSprite_move(game->cloud.cloud_1, (sfVector2f){-2, 0});
    if (cloud2_pos.x == -2000)
        sfSprite_setPosition(game->cloud.cloud_2, (sfVector2f){1920, 0});
    sfSprite_move(game->cloud.cloud_2, (sfVector2f){-1, 0});
    if (cloud3_pos.x == -2000)
        sfSprite_setPosition(game->cloud.cloud_3, (sfVector2f){1920, 0});
    sfSprite_move(game->cloud.cloud_3, (sfVector2f){-0.5, 0});
    sfRenderWindow_drawSprite(game->window, game->cloud.cloud_1, NULL);
    sfRenderWindow_drawSprite(game->window, game->cloud.cloud_2, NULL);
    sfRenderWindow_drawSprite(game->window, game->cloud.cloud_3, NULL);
}