/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pause_content.c
*/

#include "rpg.h"

void erase_pause_content(g_pause *content)
{
    sfTexture_destroy(content->shade_t);
    sfSprite_destroy(content->shade);
    sfTexture_destroy(content->coin_t);
    sfSprite_destroy(content->coin);
    sfText_destroy(content->pause);
    sfText_destroy(content->continu);
    sfText_destroy(content->menu);
    sfText_destroy(content->exit);
}

void init_pause_content(g_pause *content, sfRenderWindow *window)
{
    pause_init_sprites(content);
    pause_init_text(content);
}