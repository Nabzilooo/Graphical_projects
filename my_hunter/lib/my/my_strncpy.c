/*
** EPITECH PROJECT, 2021
** Day06
** File description:
** Task02
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i != n) {
        if (src[i] != '\0') {
            dest[i] = src [i];
        } else {
            dest[i] = '\0';
        }
        i++;
    }
    return (dest);
}
