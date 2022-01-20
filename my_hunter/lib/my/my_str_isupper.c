/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** task10
*/

static int is_upper(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return (1);
    }
    return (0);
}

int my_str_isupper(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        if (!is_upper(str[i])) {
            return (0);
        }
    }
    return (1);
}
