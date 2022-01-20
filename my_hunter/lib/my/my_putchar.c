/*
** EPITECH PROJECT, 2021
** putchar
** File description:
** Print function
*/

void write(int fd, const void *buf, int count);

void my_putchar(char c)
{
    write(1, &c, 1);
}
