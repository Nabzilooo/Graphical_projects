/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** task03
*/

int my_strlen(char const *str);

int my_strncmp(char const *s1, char const *s2, int n)
{
    int first_size = my_strlen(s1);
    int second_size = my_strlen(s2);

    if (first_size > n)
        first_size = n;
    if (second_size > n)
        second_size = n;
    for (int i = 0; s1[i] != '\0' && s2[i] != '\0' && i < n; i++) {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
    }
    if (first_size == second_size)
        return (0);
    if (first_size > second_size)
        return (s1[second_size]);
    return (s2[first_size] * (-1));
}
