/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** task10
*/

static int is_printable(char c)
{
    if (c >= 33 && c <= 126) {
        return (1);
    }
    return (0);
}

int my_str_isprintable(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_printable(str[i])) {
            return (0);
        }
    }
    return (1);
}
