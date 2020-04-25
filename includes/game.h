/*
** EPITECH PROJECT, 2019
** Visual Studio Live Share (Workspace)
** File description:
** game.h
*/

#ifndef GAME_H
#define GAME_H

typedef struct player
{
    int hp;
    int gold;
    int inv_open;
    sfTexture *t_inv;
    sfSprite *inv;
} player_t;

typedef struct params
{
    char *name;
    char *key;
} params_t;

typedef struct hud
{
    sfTexture *t_hp;
    sfTexture *t_mana;
    sfTexture *t_mob;
    sfSprite *mob;
    sfSprite *hp;
    sfSprite *mana;
    sfFont* f_score;
    sfText* score;
    sfText* text_mob;
} hud_t;

typedef struct menu
{
    sfTexture *t_title;
    sfTexture *t_soundicon;
    sfTexture *t_button;
    sfTexture *t_exit;
    sfTexture *t_bg;
    sfTexture *t_logo;
    sfTexture *t_play;
    sfSprite *soundicon;
    sfSprite *title;
    sfSprite *button;
    sfSprite *exit;
    sfSprite *bg;
    sfSprite *logo;
    sfSprite *play;
    hud_t hud;
} menu_t;

typedef struct cloud
{
    sfTexture *tcloud_1;
    sfTexture *tcloud_2;
    sfTexture *tcloud_3;
    sfSprite *cloud_1;
    sfSprite *cloud_2;
    sfSprite *cloud_3;
} cloud_t;

#endif