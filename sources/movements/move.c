/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** move.c
*/

#include "rpg.h"

void move_perso(game_t *game)
{
    char way = game->animation->way;
    sfVector2f new = {0, 0};

    if (way == 0 || way == 3) {
        new.y = ((way - 1.5) / -1.5) * 10;
        sfSprite_move(game->animation->perso, new);
    } else {
        new.x = ((way - 1.5) / -0.5) * 10;
        sfSprite_move(game->animation->perso, new);
    }
}

sfVector2i where_he_want_to_go(sfVector2f cur)
{
    if (cur.y >= SQ_D && cur.x > 750 && cur.x < 900)
        return (sfVector2i){0, 1};
    if (cur.y <= SQ_U && cur.x > 750 && cur.x < 900)
        return (sfVector2i){0, -1};
    if (cur.x >= SQ_R && cur.y > 400 && cur.y < 600)
        return (sfVector2i){1, 0};
    if (cur.x <= SQ_L && cur.y > 400 && cur.y < 600)
        return (sfVector2i){-1, 0};
    return (sfVector2i){0, 0};
}

sfVector2i move_perso_in_map(game_t *game)
{
    sfVector2f cur = sfSprite_getPosition(game->animation->perso);
    sfVector2i wanted = where_he_want_to_go(cur);
    sfVector2i pos = game->map->position;

    if (cur.y >= SQ_D && cur.x > 750 && cur.x < 900 && pos.y + 1 < 8) {
        cur.y = 150;
        sfSprite_setPosition(game->animation->perso, cur);
    } if (cur.y <= SQ_U && cur.x > 750 && cur.x < 900 && pos.y - 1 > 0) {
        cur.y = 900;
        sfSprite_setPosition(game->animation->perso, cur);
    } if (cur.x >= SQ_R && cur.y > 400 && cur.y < 600 && pos.x + 1 < 8) {
        cur.x = 450;
        sfSprite_setPosition(game->animation->perso, cur);
    } if (cur.x <= SQ_L && cur.y > 400 && cur.y < 600 && pos.x - 1 > 0) {
        cur.x = 1250;
        sfSprite_setPosition(game->animation->perso, cur);
    }
    return wanted;
}

sfVector2f move_in_wanted_zone(sfVector2i wanted)
{
    wanted.x *= -1050;
    wanted.y *= -1050;
    return (sfVector2f){wanted.x, wanted.y};
}

int move_map(game_t *game, sfVector2i wanted)
{
    sfVector2i pos = game->map->position;

    pos.x += wanted.x;
    pos.y += wanted.y;
    if ((wanted.x != 0 || wanted.y != 0) &&
        (pos.x > 0 && pos.x < 8 && pos.y > 0 && pos.y < 8)) {
        sfSprite_move(game->map->map, move_in_wanted_zone(wanted));
        game->map->position.x += wanted.x;
        game->map->position.y += wanted.y;
        return 1;
    }
    return 0;
}