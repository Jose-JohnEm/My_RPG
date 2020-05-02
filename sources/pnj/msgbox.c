/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** msgbox.c
*/

#include "rpg.h"

void init_msgbox(game_t *game)
{
    game->pnj.t_boxmsg = sfTexture_createFromFile("assets/msgbox.jpg", NULL);
    game->pnj.boxmsg = sfSprite_create();
    sfSprite_setTexture(game->pnj.boxmsg, game->pnj.t_boxmsg, sfTrue);
    game->pnj.pnjtext = sfText_create();
    sfText_setString(game->pnj.pnjtext, q_hello);
    sfText_setFont(game->pnj.pnjtext, game->intro.font);
    sfText_setCharacterSize(game->pnj.pnjtext, 50);
}

void select_msg(game_t *game)
{
    if (game->pnj.msgtype == 1)
        sfText_setString(game->pnj.pnjtext, q_firstkey);
    if (game->pnj.msgtype == 2)
        sfText_setString(game->pnj.pnjtext, q_lastkey);
    if (game->pnj.msgtype == 3)
        sfText_setString(game->pnj.pnjtext, q_boss);
    if (game->pnj.msgtype == 3)
        sfText_setString(game->pnj.pnjtext, q_boss2);
}

void draw_msg(game_t *game)
{
    sfText_setPosition(game->pnj.pnjtext, (sfVector2f){0, 800});
    sfSprite_setPosition(game->pnj.boxmsg, (sfVector2f){0, 800});
    sfRenderWindow_drawSprite(game->window, game->pnj.boxmsg, NULL);
    sfRenderWindow_drawText(game->window, game->pnj.pnjtext, NULL);
}