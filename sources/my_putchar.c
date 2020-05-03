/*
** EPITECH PROJECT, 2019
** my_putchar
** File description:
** lib - mehdi.zehri
*/

#include <unistd.h>

void my_putchar(char c)
{
    int i = write(1, &c, 1);

    (void)i;
}