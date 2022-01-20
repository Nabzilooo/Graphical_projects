/*
** EPITECH PROJECT, 2021
** Task02
** File description:
** Write a function
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
