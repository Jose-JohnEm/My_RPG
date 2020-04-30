/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_ennemy.c
*/

#include "rpg.h"

g_ennemy init_from_type(char type)
{
    g_ennemy mob;

    mob.pv = 50;
    mob.mob = sfSprite_create();
    mob.mob_t = sfTexture_createFromFile("", NULL);
    return mob;
}

g_ennemy *init_ennemy(void)
{
    g_ennemy *mob = malloc(sizeof(*mob) * (MONSTERS + 1));

    mob[MONSTERS].mob = NULL;
    mob[0] = init_from_type(SKULL_BOW);
}