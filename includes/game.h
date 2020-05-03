/*
** EPITECH PROJECT, 2019
** Visual Studio Live Share (Workspace)
** File description:
** game.h
*/

#include "rpg.h"
#include "rpg/structures/map_struct.h"

#ifndef GAME_H
#define GAME_H

typedef struct player
{
    int hp;
    int gold;
    int inv_open;
    int exp;
    int level;
    int quest;
    sfMusic *expsound;
    sfTexture *t_inv;
    sfSprite *inv;
    sfClock *clock;
    sfTime time;
    sfUint32 seconds;
    sfTexture *t_lvlup;
    sfSprite *lvlup;
    sfText *text;
    sfText *textlvl;
    p_target target;
} player_t;

typedef struct params
{
    char *name;
    char *key;
} params_t;

typedef struct hud
{
    sfTexture *t_hp;
    sfTexture *t_fullhp;
    sfTexture *t_mana;
    sfTexture *t_isalive;
    sfTexture *t_lvl;
    sfSprite *hp;
    sfSprite *is_alive;
    sfSprite *fullhp;
    sfSprite *mana;
    sfSprite *lvl;
    sfFont *f_lvl;
    sfText *score;
    sfText *textlvl;
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

typedef struct intro
{
    sfText *text;
    sfText *text2;
    sfText *text3;
    sfText *name;
    sfTexture *t_intro;
    sfSprite *intro;
    sfMusic *music;
    sfFont *font;
    sfClock *clock;
    sfTime time;
    sfUint32 seconds;
    sfTexture *t_bg;
    sfSprite *bg;
} intro_t;

typedef struct sound
{
    sfMusic *end;
    sfMusic *gameover;
    sfMusic *music;
} sound_t;

typedef struct pnj
{
    sfTexture *t_pnjquest;
    sfSprite *pnjquest;
    vec4 quest;
    sfTexture *t_pnjdonjon;
    sfSprite *pnjdonjon;
    vec4 donjon;
    sfTexture *t_boxmsg;
    sfSprite *boxmsg;
    vec4 box;
    sfText *pnjtext;
    int msgtype;
} pnj_t;

#endif