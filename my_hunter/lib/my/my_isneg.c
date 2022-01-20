/*
** EPITECH PROJECT, 2021
** Task 04
** File description:
** Write a function
*/

void my_putchar(char c);

int my_isneg(int n)
{
    int c;

    if (n >= 0) {
        c = 80;
        my_putchar(c);
    } else {
        my_putchar(78);
    }
    return (0);
}
