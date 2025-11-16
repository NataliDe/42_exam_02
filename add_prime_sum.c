/*Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/
#include <unistd.h>

int ft_atoi(char *n)
{

    int nb = 0;

    while(*n >= '0' && *n <= '9')
    {
        nb = nb * 10 + (*n - '0');
        n++;
    }
    return(nb);
}
int is_prime(int n)
{
    int i = 2;
    if(n < 2)
        return 0;
    while(i * i <= n)
    {
        if(n % i == 0)
            return 0;
        i++;
    }
    return 1;
}
void ft_putnbr(int n)
{
    char w;
    if(n > 9)
        ft_putnbr(n / 10);
    w = n % 10 + '0';
    write(1, &w, 1);
}

int main( int argc, char **argv)
{
    int i;
    int n; 
    int sum;
    sum = 0;
    i = 2;
    n = 0;
    if (argc != 2)
    {
        write(1, "0\n", 2);
        return 0;
    }
    n = ft_atoi(argv[1]);
    if (n <= 0)
	{
		write(1, "0\n", 2);
		return (0);
	}
    while(i <= n)
    {
        if(is_prime(i))
        {
            sum = sum + i;
        }
    i++;
    }
    ft_putnbr(sum);
     write(1, "\n", 1);
    return 0;
}


