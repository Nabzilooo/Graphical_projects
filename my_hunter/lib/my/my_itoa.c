/*
** EPITECH PROJECT, 2021
** B-MUL-100-TLS-1-1-myhunter-adil.nouiri
** File description:
** my_itoa
*/

#include <stdio.h>

#include <stdlib.h>

int get_int_len(long nbr);

char *my_revstr(char *str);

void myswap(char *a, char *b);

int mystrlen(char const *str);

char *my_itoa(int nbr)
{
    int i = 0;
    char *str = malloc(sizeof(char) * get_int_len(nbr) + 1);

    if (str == NULL)
        return (NULL);
    if (nbr == 0) {
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    for (; nbr != 0; i++) {
        str[i] = ((nbr % 10) + 48);
        nbr = nbr / 10;
    }
    str[i] = '\0';
    my_revstr(str);
    return (str);
}
