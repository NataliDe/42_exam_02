#include <unistd.h>
void	print_bits(unsigned char octet)
{
    unsigned char res;
    int i;
    i = 7;
    while (i >= 0)
    {
        res = (octet >> i & 1) + '0';
        write( 1, &res, 1);
        i--;
    }
}
#include <stdio.h>

void	print_bits(unsigned char octet);

int	main(void)
{
	print_bits(2);   // 00000010
	write(1, "\n", 1);
	print_bits(255); // 11111111
	write(1, "\n", 1);
	print_bits(128); // 10000000
	write(1, "\n", 1);
	return (0);
}