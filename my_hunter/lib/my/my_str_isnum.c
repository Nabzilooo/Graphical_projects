/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** task10
*/

static int is_num(char c)
{
    if (c >= '0' && c <= '9') {
        return (1);
    }
    return (0);
}

int my_str_isnum(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_num(str[i])) {
            return (0);
        }
    }
    return (1);
}
