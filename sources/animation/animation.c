/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animation.c
*/

#include "rpg.h"

g_anim *init_animation(void)
{
    g_anim *new = malloc(sizeof(*new));
    char *path = "assets/sprite_perso/perso.png";

    new->perso = sfSprite_create();
    new->perso_t = sfTexture_createFromFile(path, NULL);
    new->rect = (sfIntRect){0, 0, XRECT, YRECT};
    new->arrow = sfSprite_create();
    new->arrow_t = sfTexture_createFromFile("assets/mob/objects/arrow.png", NULL);
    sfSprite_setTexture(new->arrow, new->arrow_t, sfFalse);
    sfSprite_setTexture(new->perso, new->perso_t, sfFalse);
    sfSprite_setTextureRect(new->perso, new->rect);
    sfSprite_setTextureRect(new->arrow, (sfIntRect){110, 60, 40, 130});
    sfSprite_setPosition(new->perso, (sfVector2f){700, 500});
    new->cl_a = sfClock_create();
    new->way = DOWN;
    return new;
}

int is_arrow_key(sfKeyCode key)
{
    if (key == sfKeyUp || key == sfKeyDown)
        return 1;
    if (key == sfKeyLeft || key == sfKeyRight)
        return 1;
    return 0;
}

void display_anim_sets(g_anim **anim, sfRenderWindow **win)
{
    sfSprite_setTextureRect((*anim)->perso, (*anim)->rect);
    sfRenderWindow_drawSprite(*win, (*anim)->perso, NULL);
}

void check_space(game_t *g)
{
    sfVector2f pos = sfSprite_getPosition(g->animation->perso);
    static int ok = 0;
    float time = sfTime_asSeconds(sfClock_getElapsedTime(g->animation->cl_a));
    char way;

    pos.x += 50;
    pos.y += 50;
    if (ok == 0 && g->event.key.code == sfKeySpace) {
        sfSprite_setPosition(g->animation->arrow, pos);
        ok = 1;
        sfClock_restart(g->animation->cl_a);
        way = g->animation->way;
    }
    if (ok == 1 && time < 1) {
        if (way == LEFT) {
            sfSprite_setRotation(g->animation->arrow, 90);
            sfSprite_move(g->animation->arrow, (sfVector2f){30, 0});
        }
        if (way == 0) {
            sfSprite_setRotation(g->animation->arrow, 180);
            sfSprite_move(g->animation->arrow, (sfVector2f){0, 30});
        }
        if (way == RIGHT) {
            sfSprite_setRotation(g->animation->arrow, 270);
            sfSprite_move(g->animation->arrow, (sfVector2f){-30, 0});
        }
        if (way == UP) {
            sfSprite_setRotation(g->animation->arrow, 0);
            sfSprite_move(g->animation->arrow, (sfVector2f){0, -30});
        }
        sfRenderWindow_drawSprite(g->window, g->animation->arrow, NULL);
    }
    if (time > 1)
        ok = 0; 
}

void animation(game_t *game)
{
    int is_moving = 0;

    if (game->game == 1) {
        if (is_arrow_key(game->event.key.code)) {
            game->animation->way = game->event.key.code - 70;
            game->event.key.code = 0;
            is_moving = 1;
        }
        select_rect_x(&game->animation, is_moving);
        select_rect_y(&game->animation, is_moving);
        if (is_moving) {
            move_perso(game);
        }
        check_space(game);
    }
    check_collision(game);
    display_anim_sets(&game->animation, &game->window);
}