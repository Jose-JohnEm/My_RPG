/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** set_col3.c
*/

#include "rpg.h"

void set_col11(game_t *game)
{
    set_col(1, 3, 3, 8);
    set_col(1, 3, 3, 9);          
    set_col(6, 2, 0, 7);
    set_col(6, 2, 1, 7);
    set_col(6, 2, 1, 8);
    set_col(6, 2, 1, 9);                  
    set_col(6, 3, 1, 3);
    set_col(6, 3, 2, 3);
    set_col(6, 3, 3, 3);
    set_col(6, 3, 3, 2);
    set_col(6, 3, 3, 1);
    set_col(6, 3, 0, 6);
    set_col(6, 3, 1, 7);
    set_col(6, 3, 2, 8);
    set_col(6, 3, 3, 9);
    set_col(6, 3, 6, 0);
    set_col(6, 3, 6, 1);
    set_col(6, 3, 6, 2);
    set_col(6, 3, 6, 3);
    set_col(6, 3, 6, 6);
    set_col(6, 3, 6, 7);
}

void set_col12(game_t *game)
{
    set_col(6, 3, 6, 8);
    set_col(6, 3, 6, 9);
    set_col(6, 3, 7, 6);
    set_col(6, 4, 6, 0);
    set_col(6, 4, 6, 1);
    set_col(6, 4, 6, 2);
    set_col(6, 4, 6, 3);
    set_col(6, 4, 6, 4);
    set_col(6, 4, 6, 5);
    set_col(6, 4, 6, 6);
    set_col(6, 4, 6, 7);
    set_col(6, 4, 6, 8);
    set_col(6, 4, 6, 9);
    set_col(6, 4, 0, 3);
    set_col(6, 4, 1, 3);
    set_col(6, 4, 2, 3);
    set_col(6, 4, 3, 3);
    set_col(6, 4, 3, 2);
    set_col(6, 4, 3, 1);
    set_col(6, 4, 3, 0);
    set_col(6, 4, 0, 6);
}

void set_col13(game_t *game)
{
    set_col(6, 4, 1, 6);
    set_col(6, 4, 2, 6);
    set_col(6, 4, 3, 6);
    set_col(6, 4, 3, 7);
    set_col(6, 4, 3, 8);
    set_col(6, 4, 3, 9);             
    set_col(6, 5, 3, 3);
    set_col(6, 5, 3, 4);
    set_col(6, 5, 3, 5);
    set_col(6, 5, 3, 6);
    set_col(6, 5, 3, 7);
    set_col(6, 5, 4, 3);
    set_col(6, 5, 5, 3);
    set_col(6, 5, 6, 3);
    set_col(6, 5, 6, 4);
    set_col(6, 5, 6, 5);
    set_col(6, 5, 6, 6);
    set_col(6, 5, 6, 7);
    set_col(6, 5, 5, 7);
    set_col(6, 5, 4, 7);
}

void big_map_collision_setter(game_t *game)
{
    set_col1(game);
    set_col2(game);
    set_col3(game);
    set_col4(game);
    set_col5(game);
    set_col6(game);
    set_col7(game);
    set_col8(game);
    set_col9(game);
    set_col10(game);
    set_col11(game);
    set_col12(game);
    set_col13(game);
}