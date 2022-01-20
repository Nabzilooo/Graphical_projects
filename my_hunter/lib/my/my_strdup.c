/*
** EPITECH PROJECT, 2021
** Day08
** File description:
** nothing
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *ptr = 0;
    int i = 0;

    ptr = malloc(my_strlen(src) + 1);
    while (i <= my_strlen(src)) {
        ptr[i] = src[i];
        i++;
    }
    return (ptr);
}
