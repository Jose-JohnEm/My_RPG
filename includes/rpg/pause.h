/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pause.h
*/

#include "rpg.h"
#include "game.h"

#ifndef PAUSE_H
#define PAUSE_H


/*----------- pause.c ---------*/
void draw_pause(game_t *game);
void pause_caption(sfRenderWindow **window, sfEvent event, 
                    g_pause *content, int *in_pause);


/*------ pause_animation.c ----*/
void pause_animation(g_pause *content, sfRenderWindow *window, int mode);
void display_pause(sfRenderWindow *window, g_pause *content, int mode);


/*------- pause_content.c -----*/
void erase_pause_content(g_pause *content);
void init_pause_content(g_pause *content, sfRenderWindow *window);


/*---- pause_init_content.c ---*/
void set_shade_factor(g_pause *content);
void pause_init_text(g_pause *content);
void pause_init_sprites(g_pause *content);

/*----- pause_text_init.c -----*/
void pause_init_text_pause(sfText **button);
void pause_init_text_continue(sfText **button);
void pause_init_text_menu(sfText **button);
void pause_init_text_exit(sfText **button);


#endif