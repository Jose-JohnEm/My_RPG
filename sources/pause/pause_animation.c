/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pause_animation.c
*/

#include "rpg.h"

void pause_animation(g_pause *content, int mode)
{
    sfClock *clock = sfClock_create();

    sfClock_restart(clock);
    while (sfTime_asSeconds(sfClock_getElapsedTime(clock)) < 1);
    sfClock_destroy(clock);
}

void display_pause(sfRenderWindow *window, g_pause *content)
{
    sfRenderWindow_drawSprite(window, content->shade, NULL);
}