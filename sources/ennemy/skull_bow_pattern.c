/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** skull_bow_pattern.c
*/

#include "rpg.h"

void set_rotate_arrow(char way, a_sk_bow *attack)
{
    if (way == DOWN) {
        sfSprite_move(attack->arr, (sfVector2f){0, 20});
        sfSprite_setRotation(attack->arr, 180);
    }
    if (way == UP) {
        sfSprite_move(attack->arr, (sfVector2f){0, -20});
        sfSprite_setRotation(attack->arr, 0);
    }
    if (way == LEFT) {
        sfSprite_move(attack->arr, (sfVector2f){-20, 0});
        sfSprite_setRotation(attack->arr, 270);
    }
    if (way == RIGHT) {
        sfSprite_move(attack->arr, (sfVector2f){20, 0});
        sfSprite_setRotation(attack->arr, 90);
    }
}

void skull_launch_arrow(a_sk_bow *attack, char way, sfRenderWindow **win, sfSprite *ennemy)
{
    static int ok = 0;
    sfVector2f cur_pos = sfSprite_getPosition(ennemy);
    
    cur_pos.x += 50;
    cur_pos.y += 50;
    if (ok == 0) {
        sfSprite_setPosition(attack->arr, cur_pos);
        ok = 1;
    }
    set_rotate_arrow(way, attack);
    sfRenderWindow_drawSprite(*win, attack->arr, NULL);
    if (sfTime_asSeconds(sfClock_getElapsedTime(attack->clock)) > 1.95)
        ok = 0;
}

void do_skull_detect(sfVector2f u_pos, sfVector2f e_pos, char *way, int ok)
{
    if (ok == 1) {
        if (u_pos.y == e_pos.y) {
            if (u_pos.x > e_pos.x)
                *way = RIGHT;
            else
                *way = LEFT;
        }
        if (u_pos.x == e_pos.x) {
            if (u_pos.y > e_pos.y)
                *way = DOWN;
            else
                *way = UP;
        }
    }
}

void does_skull_arrow_hurt_player(a_sk_bow *att, sfVector2f u_pos, int *hp)
{
    sfVector2f a_pos = sfSprite_getPosition(att->arr);

    if (a_pos.y - 50 > u_pos.y - 100 && a_pos.y - 50 < u_pos.y + 100)
        if (a_pos.x - 50 > u_pos.x - 100 && a_pos.x - 150 < u_pos.x + 150)
            *hp -= 1;
}

void skull_bow_attack(game_t *game, int i)
{
    sfVector2f u_pos = sfSprite_getPosition(game->animation->perso);
    sfVector2f e_pos = sfSprite_getPosition(game->ennemy[i].mob);
    static int ok = 0;
    static char way = -1;
    float time = sfTime_asSeconds(sfClock_getElapsedTime(game->ennemy[i].sk_attack.clock));

    if (ok == 0 && time > 2) {
        ok = 1;
        sfClock_restart(game->ennemy[i].sk_attack.clock);
        way = -1;
    }
    do_skull_detect(u_pos, e_pos, &way, ok);
    if (way == -1)
        sfClock_restart(game->ennemy[i].sk_attack.clock);
    else
        ok = 0;
    if (ok == 0 && time < 2) {
        skull_launch_arrow(&game->ennemy[i].sk_attack, way, &game->window, game->ennemy[i].mob);
        does_skull_arrow_hurt_player(&game->ennemy[i].sk_attack, u_pos, &game->player.hp);
    }
}