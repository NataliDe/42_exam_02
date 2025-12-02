/*
Assignment name  : paramsum
Expected files   : paramsum.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that displays the number of arguments passed to it, followed by
a newline.

If there are no arguments, just display a 0 followed by a newline.

Example:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>*/
#include <unistd.h>

static void ft_putnbr(int n)
{
    char c;

    if (n > 9)
        ft_putnbr(n / 10);      // Рекурсивно виводимо всі попередні цифри
    c = n % 10 + '0';            // Поточна цифра
    write(1, &c, 1);             // Виводимо її
}

int main(int argc, char **argv)
{
    (void)argv;                  // Щоб уникнути попередження про невикористаний аргумент

    if (argc <= 1)
        write(1, "0\n", 2);      // Якщо немає аргументів → виводимо 0
    else
    {
        ft_putnbr(argc - 1);     // Кількість аргументів (не рахуємо ім'я програми)
        write(1, "\n", 1);
    }
    return (0);
}
