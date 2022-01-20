/*
** EPITECH PROJECT, 2021
** Day07
** File description:
** Task02
*/

char *my_strncat(char *dest, const char *src, int n)
{
    int i;
    int j;

    for (i = 0; dest[i] != '\0'; i++);
    for (j = 0; src[j] != '\0' && j < n; j++) {
        dest[i + j] = src[j];
    }
    dest[i + j] = '\0';
    return (dest);
}
