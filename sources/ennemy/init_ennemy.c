/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_ennemy.c
*/

#include "rpg.h"

g_ennemy init_skull(vec4 pos)
{
    g_ennemy mob;

    mob.pv = 50;
    mob.mob = sfSprite_create();
    mob.mob_t = sfTexture_createFromFile("assets/mob/skull_bow.png", NULL);
    mob.rect = (sfIntRect){0, 0, 100, 100};
    sfSprite_setTexture(mob.mob, mob.mob_t, sfFalse);
    sfSprite_setTextureRect(mob.mob, mob.rect);
    mob.pos = pos;
    sfSprite_setPosition(mob.mob,
        (sfVector2f){pos.x2 * 90 + SQ_L, pos.y2 * 90 + SQ_U});
    return mob;
}

g_ennemy init_from_type(char type, vec4 pos)
{
    if (type == SKULL_BOW)
        return init_skull(pos);
}

g_ennemy *init_ennemy(void)
{
    g_ennemy *mob = malloc(sizeof(g_ennemy) * MONSTERS);

    mob[0] = init_from_type(SKULL_BOW, (vec4){0, 0, 1, 1});
    mob[1] = init_from_type(SKULL_BOW, (vec4){1, 0, 5, 5});
    mob[2] = init_from_type(SKULL_BOW, (vec4){1, 1, 3, 8});
    return mob;
}