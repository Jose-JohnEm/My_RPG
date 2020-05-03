/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** msgbox.c
*/

#include "rpg.h"

void init_msgbox(game_t *game)
{
    game->pnj.t_boxmsg = sfTexture_createFromFile("assets/boxmsg.png", NULL);
    game->pnj.boxmsg = sfSprite_create();
    sfSprite_setTexture(game->pnj.boxmsg, game->pnj.t_boxmsg, sfTrue);
    game->pnj.pnjtext = sfText_create();
    sfText_setFont(game->pnj.pnjtext, game->intro.font);
    sfText_setCharacterSize(game->pnj.pnjtext, 30);
    sfText_setColor(game->pnj.pnjtext, sfBlack);
    sfText_setString(game->pnj.pnjtext, q_hello);
}

void select_msg(game_t *game)
{
    if (game->pnj.msgtype == 1)
        sfText_setString(game->pnj.pnjtext, q_firstkey);
    if (game->pnj.msgtype == 2)
        sfText_setString(game->pnj.pnjtext, q_lastkey);
    if (game->pnj.msgtype == 3)
        sfText_setString(game->pnj.pnjtext, q_boss);
}

void draw_msg(game_t *game)
{
    select_msg(game);
    sfText_setPosition(game->pnj.pnjtext, (sfVector2f){500, 850});
    sfSprite_setPosition(game->pnj.boxmsg, (sfVector2f){400, 800});
    sfRenderWindow_drawSprite(game->window, game->pnj.boxmsg, NULL);
    sfRenderWindow_drawText(game->window, game->pnj.pnjtext, NULL);
}