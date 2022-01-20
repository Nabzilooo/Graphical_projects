/*
** EPITECH PROJECT, 2021
** Task05
** File description:
** Write a function
*/

int my_put_nbr(int nb);

int my_getnbr(char const *str)
{
    long long int result = 0;
    int i = 0, k = 1, counter = 0, a = 0;

    for (; (str[i] < '0' || str[i] > '9') && str[i] != '\0'; i++) {
        if (str[i] == '-')
            a++;
    }
    for (int j = i; str[j] >= '0' && str[j] <= '9' && str[i] != '\0'; j++)
        counter++;
    if (counter > 10 || counter == 0)
        return (0);
    for (int final = i + counter; final > i; final--) {
        result = (str[final - 1] - 48) * k + result;
        k = k * 10;
    }
    if (a % 2 != 0)
        result = result * (-1);
    if (result > 2147483647 || result < -2147483648)
        return (0);
    return ((int)result);
}
