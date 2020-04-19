/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2019
** File description:
** pause_text_init.c
*/

#include "rpg.h"

void pause_init_text_pause(sfText **button)
{
    sfText_setFont(*button, sfFont_createFromFile("assets/bulgati.ttf"));
    sfText_setCharacterSize(*button, 150);
    sfText_setString(*button, "Pause");
    sfText_setColor(*button, sfWhite);
    sfText_setPosition(*button, (sfVector2f){700, 200});
}

void pause_init_text_continue(sfText **button)
{
    sfText_setFont(*button, sfFont_createFromFile("assets/bulgati.ttf"));
    sfText_setCharacterSize(*button, 50);
    sfText_setString(*button, "Continue");
    sfText_setColor(*button, sfWhite);
    sfText_setPosition(*button, (sfVector2f){700, 600});
}

void pause_init_text_menu(sfText **button)
{
    sfText_setFont(*button, sfFont_createFromFile("assets/bulgati.ttf"));
    sfText_setCharacterSize(*button, 50);
    sfText_setString(*button, "Main Menu");
    sfText_setColor(*button, sfWhite);
    sfText_setPosition(*button, (sfVector2f){700, 750});
}

void pause_init_text_exit(sfText **button)
{
    sfText_setFont(*button, sfFont_createFromFile("assets/bulgati.ttf"));
    sfText_setCharacterSize(*button, 50);
    sfText_setString(*button, "Exit");
    sfText_setColor(*button, sfWhite);
    sfText_setPosition(*button, (sfVector2f){700, 900});
}