#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        printf("\n");
        return (0);
    }

    int n = atoi(av[1]);
    int first = 1;

    if (n == 1)
    {
        printf("1\n");
        return (0);
    }

    int i = 2;
    while (i * i <= n)
    {
        while (n % i == 0)
        {
            if (!first)
                printf("*");
            printf("%d", i);
            first = 0;
            n /= i;
        }
        i++;
    }

    if (n > 1)            // якщо залишився простий дільник
    {
        if (!first)
            printf("*");
        printf("%d", n);
    }

    printf("\n");
    return (0);
}