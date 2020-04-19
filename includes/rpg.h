/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** rpg.h
*/

#ifndef RPG_H
#define RPG_H

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/System.h>
#include <stdlib.h>
#include "game.h"

typedef struct game
{
    sfRenderWindow *window;
    sfEvent event;
    sfVector2i mousepos;
    sfMusic *music;
    sfIntRect rect;
    sfClock *clock;
    sfTime time;
    sfUint32 seconds;
    int game;
    int mute;
    player_t player;
    cloud_t cloud;
} game_t;

void init_rpg(void);
void get_colision(game_t *game);
void draw_window(game_t *game, menu_t *menu);
void my_destroy(game_t *game);
void create_window(game_t *game, menu_t *menu);
void draw_menu(game_t *game, menu_t *menu);
void init_menu(game_t *game, menu_t *menu);
void my_putchar(char c);
int my_putstr(char *str);
void start_game(game_t *game, menu_t *menu);
void window_event(game_t *game, menu_t *menu);
void sound_button_effect(game_t *game, menu_t *menu);
void play_or_stop_sound(game_t *game, menu_t *menu);
void init_cloud(game_t *game);
void draw_cloud(game_t *game);
void click_for_exit(game_t *game, menu_t *menu);
void menu_buttons(game_t *game, menu_t *menu);
void init_end(game_t *game, menu_t *menu);
void draw_end(game_t *game, menu_t *menu);
int read_map(char *file_path, game_t *game);
void init_hud(game_t *game, menu_t *menu);
void draw_hud(game_t *game, menu_t *menu);
void init_inventory(game_t *game);
void draw_inventory(game_t *game);


#include "rpg/pause.h"

#endif