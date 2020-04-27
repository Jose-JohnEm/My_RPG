/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pause.c
*/

#include "rpg.h"

int is_beetwin(int min, int i, int max)
{
    if (min < i && i < max)
        return 1;
    return 0;
}

void cursor_position(sfRenderWindow *window, sfSprite *coin, int *choice)
{
    int x = sfMouse_getPositionRenderWindow(window).x;
    int y = sfMouse_getPositionRenderWindow(window).y;

    if (is_beetwin(700, x, 1000) && is_beetwin(500, y, 600)) {
        sfSprite_setPosition(coin, (sfVector2f){550, 600});
        *choice = 1;
    }
    if (is_beetwin(700, x, 1000) && is_beetwin(650, y, 750)) {
        sfSprite_setPosition(coin, (sfVector2f){550, 750});
        *choice = 0;
    }
    if (is_beetwin(700, x, 1000) && is_beetwin(800, y, 900)) {
        sfSprite_setPosition(coin, (sfVector2f){550, 900});
        *choice = 3;
    }
}

void pause_caption(sfRenderWindow **window, sfEvent event,
                                g_pause *content, int *i_p)
{
    if (event.key.type == 4 && event.key.code == 27 && *i_p == 1) {
        init_pause_content(content, *window);
        *i_p = 2;
        pause_animation(content, *window, 2);
        return;
    } else if ((event.key.type == 4 && event.key.code == 27 && *i_p == 2) ||
        (event.mouseButton.type == sfEvtMouseButtonReleased && *i_p == 2)) {
        pause_animation(content, *window, 1);
        *i_p = content->choice;
        erase_pause_content(content);
        return;
    } else if (*i_p == 2) {
        cursor_position(*window, content->coin, &content->choice);
        display_pause(*window, content, 0);
    }
}

void draw_pause(game_t *game)
{
    static int past = 0;

    if (past == 0) {
        game->game = 1;
        past++;
    }
    pause_caption(&game->window, game->event, &game->content, &game->game);
    if (game->game != 2)
        past = 0;
    if (game->game == 3)
        sfRenderWindow_close(game->window);
}