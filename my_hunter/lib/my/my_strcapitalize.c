/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** task10
*/

char *my_strlowcase(char *str);

static int is_special(char c)
{
    if (c >= '0' && c <= '9')
        return (0);
    if (c >= 'a' && c <= 'z')
        return (0);
    if (c >= 'A' && c <= 'Z')
        return (0);
    return (1);
}

char *my_strcapitalize(char *str)
{
    str = my_strlowcase(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z'
        && (i == 0 || i >= 1 && is_special(str[i - 1]))) {
            str[i] = str[i] - 32;
        }
    }
    return (str);
}
