/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** mob_attack.c
*/

#include "rpg.h"

g_ennemy bad_girl_attack(g_ennemy mob, sfRenderWindow **win)
{
    static int ok = 0;
    sfVector2f cur_pos = sfSprite_getPosition(mob.mob);
    
    cur_pos.x += 50;
    cur_pos.y += 50;
    if (ok == 0) {
        sfSprite_setPosition(mob.attack.up, cur_pos);
        sfSprite_setPosition(mob.attack.down, cur_pos);
        sfSprite_setPosition(mob.attack.left, cur_pos);
        sfSprite_setPosition(mob.attack.right, cur_pos);
        ok = 1;
    }
    sfSprite_move(mob.attack.up, (sfVector2f){0, -20});
    sfSprite_move(mob.attack.down, (sfVector2f){0, 20});
    sfSprite_move(mob.attack.right, (sfVector2f){20, 0});
    sfSprite_move(mob.attack.left, (sfVector2f){-20, 0});
    if (ok == 1) {
        sfRenderWindow_drawSprite(*win, mob.attack.up, NULL);
        sfRenderWindow_drawSprite(*win, mob.attack.down, NULL);
        sfRenderWindow_drawSprite(*win, mob.attack.left, NULL);
        sfRenderWindow_drawSprite(*win, mob.attack.right, NULL);
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(mob.clock)) > 2.95)
        ok = 0;
    return mob;
}