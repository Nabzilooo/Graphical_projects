/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** task03
*/

#include <stdlib.h>

int my_put_nbr(int a);

int is_alphanum(char c)
{
    if (c >= 'a' && c <= 'z')
        return (1);
    if (c >= 'A' && c <= 'Z')
        return (1);
    if (c >= '1' && c <= '9')
        return (1);
    return (0);
}

int count_words(char const *str)
{
    int i = 0;
    int nb_word = 0;
    int cond = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (!is_alphanum(str[i])) {
            nb_word++;
        }
    }
    nb_word++;
    return (nb_word);
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int word = count_words(str);
    int size_tot = 0, j = 0;
    char **dest = malloc(sizeof(char *) * (word));
    int f = 0, size_char = 0, k = 0;

    for (; i < word; i++) {
        for (; is_alphanum(str[j]); j++)
            size_char++;
        dest[i] = malloc(sizeof(char) * size_char + 1);
        for (; k < size_char; k++) {
            dest[i][k] = str[f];
            f++;
        }
        j++;
        f++;
        size_char = 0;
        dest[i][k] = '\0';
    }
    return (dest);
}
