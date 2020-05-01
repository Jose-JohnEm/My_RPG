/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** level.c
*/

#include "rpg.h"

void init_lvlup(game_t *game)
{
    game->player.clock = sfClock_create();
    game->player.seconds = sfSeconds(5).microseconds;
    game->player.expsound = sfMusic_createFromFile("assets/lvlup.ogg");
    game->player.t_lvlup = sfTexture_createFromFile("assets/lvlup.png", NULL);
    game->hud.f_lvl = sfFont_createFromFile("assets/score.ttf");
    game->player.lvlup = sfSprite_create();
    sfSprite_setTexture(game->player.lvlup, game->player.t_lvlup, sfTrue);
    game->player.text = sfText_create();
    sfText_setString(game->player.text, "YOU REACH LEVEL");
    sfText_setFont(game->player.text, game->hud.f_lvl);
    sfText_setCharacterSize(game->player.text, 50);
    game->player.textlvl = sfText_create();
    sfText_setString(game->player.textlvl, itoa(game->player.level));
    sfText_setFont(game->player.textlvl, game->hud.f_lvl);
    sfText_setCharacterSize(game->player.textlvl, 100);

}

void draw_lvlup(game_t *game)
{
    int static i = 0;

    game->player.time = sfClock_getElapsedTime(game->player.clock);
    sfSprite_setScale(game->player.lvlup, (sfVector2f){0.3, 0.3});
    sfSprite_setPosition(game->player.lvlup, (sfVector2f){800, 20});
    sfText_setPosition(game->player.text, (sfVector2f){800, 230});
    sfText_setPosition(game->player.textlvl, (sfVector2f){900, 270});
    sfMusic_play(game->player.expsound);
    if (game->player.time.microseconds < game->player.seconds) {
        sfRenderWindow_drawText(game->window, game->player.text, NULL);
        sfRenderWindow_drawText(game->window, game->player.textlvl, NULL);
        sfRenderWindow_drawSprite(game->window, game->player.lvlup, NULL);
    }
    if (game->player.time.microseconds > game->player.seconds) {
        game->player.level++;
        game->player.exp = 0;
    }
}

void make_levelup(game_t *game)
{
    if (game->player.exp == 100) {
        draw_lvlup(game);
    }
}