/*
** EPITECH PROJECT, 2021
** Day 06
** File description:
** nothing
*/

int mystrlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

void myswap(char *a, char *b)
{
    char pass;

    pass = *a;
    *a = *b;
    *b = pass;
}

char *my_revstr(char *str)
{
    int j = 0;
    int i = mystrlen(str) - 1;

    while (j < i) {
        myswap(&str[i], &str[j]);
        j++;
        i--;
    }
    return (str);
}
