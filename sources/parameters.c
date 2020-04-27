/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** param.c
*/

#include "rpg.h"

int error_name(char *name)
{
    if (name[0] == '\n') {
        my_putstr("You need to put a name then press entry\n");
        return 0;
    }
    return 1;
}

int set_name(game_t *game)
{
    char *name = NULL;
    my_putstr("What's your name ?\n");
    name = get_info();
    if (name == NULL) {
        my_putstr("Bye !\n");
        return -1;
    }
    while (error_name(name) != 1) {
        name = get_info();
        if (name == NULL)
            return -1;
    }
    game->params.name = name;
    my_putstr("Hello ");
    my_putstr(game->params.name);
    my_putstr(" GL & HF !\n");
    return 0;
}

int set_parameters(game_t *game)
{
    if (set_name(game) == -1)
        return -1;
    return 0;
}