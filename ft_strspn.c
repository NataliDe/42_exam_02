 #include <string.h>
size_t	ft_strspn(const char *s, const char *accept)
{
    size_t  i;
    size_t j;
    int     m;
    i = 0;
    while(s[i])
    {
        j = 0;
        while(accept[j])
        {
            if(s[i] == accept[j])
            {
               m = 1;
               break;
            }
        j++;
        }
        if (!m)
            break;
        i++;
    }
    return (i);
}