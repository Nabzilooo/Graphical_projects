/*
** EPITECH PROJECT, 2021
** Task05
** File description:
** Iterative
*/

int my_compute_power_it(int nb, int p);

int my_compute_square_root(int nb)
{
    for (int i = 0; i <= nb; i++) {
        if (nb == my_compute_power_it(i, 2)) {
            return (i);
        }
    }
    return (0);
}
