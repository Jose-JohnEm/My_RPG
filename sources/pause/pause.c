/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pause.c
*/

#include <stdio.h>

#include "rpg.h"

void pause_animation(sfSprite *shade, int mode)
{
    sfClock *clock = sfClock_create();

    sfClock_restart(clock);
    while (sfTime_asSeconds(sfClock_getElapsedTime(clock)) < 1)
        my_putstr("Animation !\n");
    sfClock_destroy(clock);
}

void erase_shade(sfTexture *shade_t, sfSprite *shade)
{
    sfTexture_destroy(shade_t);
    sfSprite_destroy(shade);
}

void display_shade(sfTexture **shade_t, sfSprite **shade)
{
    *shade_t = sfTexture_createFromFile("assets/sword.png", NULL);
    *shade = sfSprite_create();
    sfSprite_setTexture(*shade, *shade_t, sfTrue);
    sfSprite_setPosition(*shade, (sfVector2f){0, 0});
}

void pause_caption(sfRenderWindow *window, sfEvent event, int *in_pause)
{
    static sfTexture *shade_t = NULL;
    static sfSprite *shade = NULL;

    if (event.key.type == 4 && event.key.code == 27 && *in_pause == 0) {
        display_shade(&shade_t, &shade);
        *in_pause = 1;
        pause_animation(shade, *in_pause);
        sfRenderWindow_drawSprite(window, shade, NULL);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_display(window);
        return;
    } else if (event.key.type == 4 && event.key.code == 27 && *in_pause == 1) {
        erase_shade(shade_t, shade);
        *in_pause = 0;
        pause_animation(shade, *in_pause);
        return;
    }
    printf("%d   %d   %d\n", event.key.code, event.key.type, *in_pause);
}

void draw_pause(game_t *game)
{
    static int in_pause = 0;

    pause_caption(game->window, game->event, &in_pause);
}