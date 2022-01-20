/*
** EPITECH PROJECT, 2021
** Task03
** File description:
** Iterative
*/

int my_compute_power_it(int nb, int p)
{
    int i = p;
    int result = nb;

    if (p == 0) {
        return (1);
    }
    if (p < 0) {
        return (0);
    }
    while (i > 1) {
        result = result * nb;
        i--;
    }
    return (result);
}
