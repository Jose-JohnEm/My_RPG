/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2019
** File description:
** map_read.c
*/

#include "rpg.h"
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int get_sizebuff(char *file_path)
{
    struct stat s;
    long size = 0;

    stat(file_path, &s);
    size = s.st_size;
    return size;
}

int read_map(char *file_path, game_t *game)
{
    int fd = 0;
    long size_buff = get_sizebuff(file_path);
    char *buffer = malloc(sizeof(char) * (size_buff + 1));
    int r;
    sfVector2i position = {-7000, 900};

    buffer[size_buff] = '\0';
    fd = open("level1.map", O_RDONLY);
    r = read(fd, buffer, size_buff);
    close(fd);
    for (int i = 0; buffer[i] != '\0'; i++, position.x += 80) {
        if (buffer[i] == ' ') {
            position.x += 20;
        }
        if (buffer[i] == '1') {
            create_mob(game->list, buffer[i], position);
            game->nb_mob += 1;
        }
    }
}