/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** mob_attack.c
*/

#include "rpg.h"

void move_spikes_bad_girl(a_bad_girl *a)
{
    sfSprite_move(a->up, (sfVector2f){0, -15});
    sfSprite_move(a->down, (sfVector2f){0, 15});
    sfSprite_move(a->right, (sfVector2f){15, 0});
    sfSprite_move(a->left, (sfVector2f){-15, 0});
}

void re_init_spikes_position(a_bad_girl *a, int *ok, sfVector2f cur_pos)
{
    sfSprite_setPosition(a->up, cur_pos);
    sfSprite_setPosition(a->down, cur_pos);
    sfSprite_setPosition(a->left, cur_pos);
    sfSprite_setPosition(a->right, cur_pos);
    *ok = 1;
}

g_ennemy bad_girl_attack(g_ennemy mob, sfRenderWindow **win)
{
    static int ok = 0;
    sfVector2f cur_pos = sfSprite_getPosition(mob.mob);

    cur_pos.x += 100;
    cur_pos.y += 100;
    if (ok == 0)
        re_init_spikes_position(&mob.attack, &ok, cur_pos);
    move_spikes_bad_girl(&mob.attack);
    if (ok == 1) {
        sfRenderWindow_drawSprite(*win, mob.attack.up, NULL);
        sfRenderWindow_drawSprite(*win, mob.attack.down, NULL);
        sfRenderWindow_drawSprite(*win, mob.attack.left, NULL);
        sfRenderWindow_drawSprite(*win, mob.attack.right, NULL);
    }
    if (sfTime_asSeconds(sfClock_getElapsedTime(mob.clock)) > 3.95)
        ok = 0;
    return mob;
}

void skull_axe_attack(game_t *game, int i)
{
    sfVector2f new = {0, 0};
    sfVector2f u_pos = sfSprite_getPosition(game->animation->perso);
    sfVector2f e_pos = sfSprite_getPosition(game->ennemy[i].mob);

    if (u_pos.y != e_pos.y) {
        if (u_pos.y > e_pos.y)
            new.y += 4;
        else
            new.y -= 4;
    } if (u_pos.x != e_pos.x) {
        if (u_pos.x > e_pos.x)
            new.x += 4;
        else
            new.x -= 4;
    }
    sfSprite_move(game->ennemy[i].mob, new);
}