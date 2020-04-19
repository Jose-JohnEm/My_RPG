/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pause_animation.c
*/

#include "rpg.h"

void set_shade_factor(g_pause *content)
{
    sfColor shade = {255, 255, 255, content->shade_factor};

    sfText_setColor(content->pause, shade);
    sfText_setColor(content->continu, shade);
    sfText_setColor(content->menu, shade);
    sfText_setColor(content->exit, shade);
    sfSprite_setColor(content->coin, shade);
    sfSprite_setColor(content->shade, shade);
}

void pause_animation(g_pause *content, sfRenderWindow *window, int mode)
{
    sfClock *clock = sfClock_create();
    float time;

    sfClock_restart(clock);
    while ((time = sfTime_asSeconds(sfClock_getElapsedTime(clock))) < 1) {
        if (mode == 2)
            content->shade_factor = time * 255;
        else if (mode == 1)
            content->shade_factor = (1 - time) * 255;
        set_shade_factor(content);
        display_pause(window, content, 1);
    }
    sfClock_destroy(clock);
}

void display_pause(sfRenderWindow *window, g_pause *content, int mode)
{
    if (mode == 1)
        sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, content->shade, NULL);
    sfRenderWindow_drawSprite(window, content->coin, NULL);
    sfRenderWindow_drawText(window, content->pause, NULL);
    sfRenderWindow_drawText(window, content->continu, NULL);
    sfRenderWindow_drawText(window, content->menu, NULL);
    sfRenderWindow_drawText(window, content->exit, NULL);
    sfRenderWindow_display(window);
}