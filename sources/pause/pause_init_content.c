/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pause_init_content.c
*/

#include "rpg.h"

void pause_init_text(g_pause *content)
{
    content->pause = sfText_create();
    content->continu = sfText_create();
    content->menu = sfText_create();
    content->exit = sfText_create();
    
    pause_init_text_pause(&content->pause);
    pause_init_text_continue(&content->continu);
    pause_init_text_menu(&content->menu);
    pause_init_text_exit(&content->exit);
}

void pause_init_sprites(g_pause *content)
{
    content->shade_t = sfTexture_createFromFile("assets/shade.png", NULL);
    content->coin_t = sfTexture_createFromFile("assets/coin.png", NULL);
    content->shade = sfSprite_create();
    content->coin = sfSprite_create();
    
    sfSprite_setTexture(content->shade, content->shade_t, sfTrue);
    sfSprite_setScale(content->shade, (sfVector2f){3.75, 5.4});
    sfSprite_setTexture(content->coin, content->coin_t, sfTrue);
    sfSprite_setPosition(content->shade, (sfVector2f){0, 0});
    sfSprite_setPosition(content->coin, (sfVector2f){500, 300});
}