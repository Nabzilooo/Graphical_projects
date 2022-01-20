/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** task05
*/

#include <stddef.h>

int my_putstr(char const *str);

int my_strlen(char const *str);

static int is_same_checking(char const *str, char const *to_find)
{
    if (my_strlen(to_find) > my_strlen(str))
        return (0);
    for (int i = 0; to_find[i] != '\0'; i++) {
        if (str[i] != to_find[i]) {
            return (0);
        }
    }
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_same_checking(&str[i], to_find) == 1){
            return (&str[i]);
        }
    }
    return (NULL);
}
