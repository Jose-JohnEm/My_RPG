/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** animation.c
*/

#include "rpg.h"

void init_animation(g_anim **anim)
{
    char *path = "assets/sprite_perso/perso.png";

    (*anim)->perso = sfSprite_create();
    (*anim)->perso_t = sfTexture_createFromFile(path, NULL);
    (*anim)->rect = (sfIntRect){50, 50};
    sfSprite_setTexture((*anim)->perso, (*anim)->perso_t, sfFalse);
    sfSprite_setTextureRect((*anim)->perso, (*anim)->rect);
    (*anim)->way = DOWN;
}

int is_arrow_key(sfKeyCode key)
{
    if (key == sfKeyUp || key == sfKeyDown)
        return 1;
    if (key == sfKeyLeft || key == sfKeyRight)
        return 1;
    return 0;
}

void animation(game_t *game)
{
    if (game->animation == NULL)
        init_animation(&game->animation);
    if (is_arrow_key(game->event.key.code))
        select_rect(game->animation);

    return;
}