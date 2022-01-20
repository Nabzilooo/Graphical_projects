/*
** EPITECH PROJECT, 2021
** Get
** File description:
** Len int
*/

int get_int_len(long nbr)
{
    int len = 1;
    int detector = 0;
    int nb = 0;

    if (nbr < 0) {
        nbr *= -1;
        detector = 5;
        len = 2;
    }
    for (; nbr > 99999999; len += 8)
        nbr /= 100000000;
    nb = (int) nbr;
    for (; nb > 999; len += 3)
        nb /= 1000;
    for (; nb > 9; len++)
        nb /= 10;
    if (detector == 5)
        return (len * - 1);
    return (len);
}
