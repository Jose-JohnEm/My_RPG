/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** wait_for_new_attack.c
*/

#include "rpg.h"

void restart_clock_attack_sk_bow(sfClock **clock, int *ok, char *way)
{
    if (*ok == 0 && sfTime_asSeconds(sfClock_getElapsedTime(*clock)) > 2) {
        *ok = 1;
        sfClock_restart(*clock);
        *way = -1;
    }
}