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


void set_shade_factor(g_pause *content)
{
    sfColor shade = {{255, 255, 255, content->shade_factor}};

    sfText_setColor(content->pause, shade);
    sfText_setColor(content->continu, shade);
    sfText_setColor(content->menu, shade);
    sfText_setColor(content->exit, shade);
}


void display_shade_content(g_pause *content, sfRenderWindow *window)
{
    pause_init_sprites(content);
    pause_init_text(content);

    sfRenderWindow_drawSprite(window, content->shade, NULL);
    sfRenderWindow_drawText(window, content->pause, NULL);
    sfRenderWindow_display(window);
}