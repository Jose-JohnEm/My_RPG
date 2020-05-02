/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** init_ennemy_attack.c
*/

#include "rpg.h"

a_bad_girl init_bad_girl_attack()
{
    a_bad_girl a;

    a.up = sfSprite_create();
    a.down = sfSprite_create();
    a.left = sfSprite_create();
    a.right = sfSprite_create();
    a.texture = sfTexture_createFromFile("assets/mob/objects/spike.png", NULL);
    sfSprite_setTexture(a.up, a.texture, sfFalse);
    sfSprite_setTexture(a.down, a.texture, sfFalse);
    sfSprite_setTexture(a.left, a.texture, sfFalse);
    sfSprite_setTexture(a.right, a.texture, sfFalse);
    sfSprite_setRotation(a.right, 90);
    sfSprite_setRotation(a.down, 180);
    sfSprite_setRotation(a.left, 270);
    sfSprite_setScale(a.right, (sfVector2f){0.4, 0.4});
    sfSprite_setScale(a.up, (sfVector2f){0.4, 0.4});
    sfSprite_setScale(a.left, (sfVector2f){0.4, 0.4});
    sfSprite_setScale(a.down, (sfVector2f){0.4, 0.4});
    return a;
}