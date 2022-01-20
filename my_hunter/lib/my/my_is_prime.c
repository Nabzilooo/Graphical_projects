/*
** EPITECH PROJECT, 2021
** Task06
** File description:
** function
*/

int my_is_prime(int nb)
{
    if (nb <= 0) {
        return (0);
    }
    if (nb == 1) {
        return (0);
    }
    for (int i = 2; i <= (nb - 1); i++) {
        if (nb % i == 0) {
            return (0);
        }
    }
    return (1);
}
