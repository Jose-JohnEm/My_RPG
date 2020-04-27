/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** main.c
*/

#include "rpg.h"

int main(int ac, char **av)
{
    if (ac != 1)
        return 84;
    if (init_rpg() == -1)
        return 84;
}