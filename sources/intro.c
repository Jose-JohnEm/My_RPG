/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** intro.c
*/

#include "rpg.h"

void init_intro(game_t *game)
{
    game->intro.clock = sfClock_create();
    game->intro.seconds = sfSeconds(8).microseconds;
    game->skip_intro = 0;
    game->intro.font = sfFont_createFromFile("assets/score.ttf");
    game->intro.name = sfText_create();
    sfText_setString(game->intro.name, game->params.name);
    sfText_setFont(game->intro.name, game->intro.font);
    sfText_setCharacterSize(game->intro.name, 150);
    game->intro.t_intro = sfTexture_createFromFile("assets/intro.png", NULL);
    game->intro.t_bg = sfTexture_createFromFile("assets/intro_bg.jpg", NULL);
    game->intro.bg = sfSprite_create();
    game->intro.intro = sfSprite_create();
    sfSprite_setTexture(game->intro.intro, game->intro.t_intro, sfTrue);
    sfSprite_setTexture(game->intro.bg, game->intro.t_bg, sfTrue);
    game->intro.music = sfMusic_createFromFile("assets/intro.ogg");
}

void skip_intro(game_t *game)
{
    if (game->game == 90 || game->game == 91) {
        if (game->event.type == sfEvtKeyPressed
            && game->event.key.code == sfKeySpace) {
            game->skip_intro = 1;
            game->game = 1;
            sfMusic_stop(game->intro.music);
            sfMusic_play(game->sound.music);
            sfMusic_setLoop(game->sound.music, 1);
        }
    }
}

void timer_intro(game_t *game)
{
    int static x = 0;

    game->intro.time = sfClock_getElapsedTime(game->intro.clock);
    sfSprite_setTextureRect(game->intro.intro, (sfIntRect){x, 0, 1382, 1212});
    if (game->intro.time.microseconds > game->intro.seconds) {
        sfSprite_setTextureRect(game->intro.intro,
            (sfIntRect) {x, 0, 1382, 1212});
        if (x == 0)
            game->game = 91;
        if (x >= 1382 * 3) {
            game->game = 1;
            game->skip_intro = 1;
            sfMusic_stop(game->intro.music);
            sfMusic_play(game->sound.music);
            sfMusic_setLoop(game->sound.music, 1);
        }
        else
            x = x + 1382;
        sfClock_restart(game->intro.clock);
    }
}

void draw_intro(game_t *game)
{
    timer_intro(game);
    sfSprite_setScale(game->intro.intro, (sfVector2f){1, 0.8});
    sfRenderWindow_drawSprite(game->window, game->intro.bg, NULL);
    sfText_setPosition(game->intro.name, (sfVector2f){800, 650});
    sfSprite_setPosition(game->intro.intro, (sfVector2f){300, 100});
    sfRenderWindow_drawSprite(game->window, game->intro.intro, NULL);
    if (game->game == 90)
        sfRenderWindow_drawText(game->window, game->intro.name, NULL);
}