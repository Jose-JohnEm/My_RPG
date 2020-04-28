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
    sfSprite_setTexture(new->perso, new->perso_t, sfFalse);
    sfSprite_setTextureRect(new->perso, new->rect);
    sfSprite_setPosition(new->perso, (sfVector2f){700, 500});
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
    }
    display_anim_sets(&game->animation, &game->window);
}