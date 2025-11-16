
#include <unistd.h>
unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char res;
    int i;

    i = 0;
     while(i <= 7)
     {
        res = (octet >> i & 1) + '0';
        write( 1, &res, 1);
        i++;
     }
}
int main (void)
{
    reverse_bits(2);
    return 0;
}