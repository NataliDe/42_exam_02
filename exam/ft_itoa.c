#include <stdlib.h>
int lenf(long long n)
{
    int len = 0;
    if (n <= 0)
    {
        len++;
    }

    while(n != 0)
    {
        n = n  / 10;
        len++;
    }
    return(len);
}

char	*ft_itoa(int nbr)
{
    char *str;
    int len;
    long long n = nbr;
    
    len = lenf(n);
    str = (char *)malloc(len + 1);
    if(!str)
    return (NULL);
    str[len] = '\0';
    if (n == 0){
        str[0] = '0';
        return(str);
    }
    if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
    while(n > 0)
    {
        str[--len] = (n % 10) + '0';
        n = n / 10;
    }
    return(str);
}
#include <stdio.h>
int main (void)
{

    printf( "%s", ft_itoa(-2147483648));
    return 0;
}