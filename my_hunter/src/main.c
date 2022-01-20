/*
** EPITECH PROJECT, 2021
** hunter
** File description:
** main.c
*/

#include "../include/my.h"
#include "../include/struct.h"
#include "../include/hunter.h"

int main(int argc, char **argv)
{
    if (argc >= 2 && argv[1][0] == '-' && argv[1][1] == 'h') {
        help();
        return (0);
    }
    my_hunter();
    return (0);
}
