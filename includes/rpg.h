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
#include <SFML/Window.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>


#include "rpg/structures/item_struct.h"
#include "game.h"
#include "rpg/structures/pause_struct.h"
#include "rpg/structures/animation_struct.h"
#include "rpg/structures/map_struct.h"
#include "rpg/structures/ennemy_struct.h"
#include "rpg/structures/meteo_struct.h"
#include "rpg/pnj.h"
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
    int skip_intro;
    int mute;
    player_t player;
    hud_t hud;
    cloud_t cloud;
    g_pause content;
    g_anim *animation;
    g_map *map;
    g_ennemy *ennemy;
    pnj_t pnj;
    intro_t intro;
    params_t params;
    sound_t sound;
} game_t;

#include "rpg/meteo.h"
#include "rpg/map_collision.h"
#include "rpg/animation.h"
#include "rpg/pause.h"
#include "rpg/map.h"
#include "rpg/movements.h"
#include "rpg/collision.h"
#include "rpg/ennemy.h"
#include "rpg/item.h"

int init_rpg(void);
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
void init_hud(game_t *game);
void draw_hud(game_t *game);
void init_inventory(game_t *game);
void draw_inventory(game_t *game);
int set_parameters(game_t *game);
int my_strlen(char *str);
char *get_info(void);
void draw_intro(game_t *game);
void init_intro(game_t *game);
void skip_intro(game_t *game);
void sound_handling(game_t *game);
void init_player(game_t * game);
void init_lvlup(game_t *game);
void make_levelup(game_t *game);
char *itoa(int nb);
void disp_pnj(game_t *g);
void init_pnjs(game_t *game);
void draw_questpnj(game_t *game);

#endif