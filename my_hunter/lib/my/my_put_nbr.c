/*
** EPITECH PROJECT, 2021
** Task 07
** File description:
** Write a function
*/

void my_putchar(char c);

static int my_power(int a, int b)
{
    int c = 1;

    for (int i = 0; i < b; i++) {
        c = c * a;
    }
    return (c);
}

static int my_count_size(int a)
{
    int i = 0;

    if (a == 0)
        return (1);
    while (a != 0) {
        a = a / 10;
        i++;
    }
    return (i);
}

int my_put_nbr(int a)
{
    int size = my_count_size(a);
    int temp = 0;

    if (a < 0) {
        my_putchar('-');
        a = a * (-1);
    }
    for (int i = 0; i < size; i++) {
        temp = a / my_power(10, size - i - 1);
        if (i != 0) {
            temp = temp % 10;
        }
        my_putchar(temp + 48);
    }
    return (0);
}
