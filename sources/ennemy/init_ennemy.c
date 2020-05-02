/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_ennemy.c
*/

#include "rpg.h"

g_ennemy init_skull_bow(vec4 pos)
{
    g_ennemy mob;

    mob.pv = 20;
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

g_ennemy init_skull_axe(vec4 pos)
{
    g_ennemy mob;

    mob.pv = 10;
    mob.mob = sfSprite_create();
    mob.mob_t = sfTexture_createFromFile("assets/mob/skull_axe/idle.png", NULL);
    mob.rect = (sfIntRect){0, 0, 24, 32};
    sfSprite_setTexture(mob.mob, mob.mob_t, sfFalse);
    sfSprite_setTextureRect(mob.mob, mob.rect);
    mob.pos = pos;
    sfSprite_setPosition(mob.mob, (sfVector2f){pos.x2 * 90 + SQ_L, pos.y2 * 90 + SQ_U});
    sfSprite_setScale(mob.mob, (sfVector2f){3, 3});
    return mob;
}

g_ennemy init_bad_girl(vec4 pos)
{
    g_ennemy mob;

    mob.pv = 30;
    mob.mob = sfSprite_create();
    mob.mob_t = sfTexture_createFromFile("assets/mob/magical.png", NULL);
    mob.rect = (sfIntRect){0, 0, 100, 100};
    sfSprite_setTexture(mob.mob, mob.mob_t, sfFalse);
    sfSprite_setTextureRect(mob.mob, mob.rect);
    mob.pos = pos;
    sfSprite_setPosition(mob.mob, (sfVector2f){pos.x2 * 90 + SQ_L, pos.y2 * 90 + SQ_U});
    sfSprite_setScale(mob.mob, (sfVector2f){2, 2});
    mob.attack = init_bad_girl_attack();
    mob.type = BAD_GIRL;
    mob.clock = sfClock_create();
    return mob;
}

g_ennemy init_from_type(char type, vec4 pos)
{
    if (type == SKULL_BOW)
        return init_skull_bow(pos);
    if (type == SKULL_AXE)
        return init_skull_axe(pos);
    if (type == BAD_GIRL)
        return init_bad_girl(pos);
}

g_ennemy *init_ennemy(void)
{
    g_ennemy *mob = malloc(sizeof(g_ennemy) * MONSTERS);

    mob[0] = init_from_type(SKULL_BOW, (vec4){0, 0, 6, 5});
    return mob;
}