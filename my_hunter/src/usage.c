/*
** EPITECH PROJECT, 2021
** B-MUL-100-TLS-1-1-myhunter-adil.nouiri
** File description:
** usage.c
*/

#include "../include/my.h"
#include "../include/hunter.h"

int help(void)
{
    my_putstr("USAGE\n");
    my_putstr("    make re then ./my_hunter\n");
    my_putchar(10);
    my_putstr("DESCRIPTION\n");
    my_putstr("    Welcome to my «my_hunter» game.\n");
    my_putstr("    Your family is waiting you for dinner, \n");
    my_putstr("    and you must kill as many ducks as possible.\n");
    my_putstr("    Let 3 ducks flee and the game will be over.\n");
    my_putchar(10);
    my_putstr("COMMANDE\n");
    my_putstr("    -Right or left click to shoot\n    -P to pause the game\n");
    my_putstr("    -R to exit the pause mode\n");
    my_putstr("    -Escape key to close the game faster\n");
    my_putchar(10);
    my_putstr("Good luck, hunter !\n\n");
    return (0);
}
