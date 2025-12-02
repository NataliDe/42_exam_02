
#include <string.h>
size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j = 0;
    int m;

    while(s[i])
    {
        m = 0;
        j = 0;
        while(accept[j])
        {
          if (s[i] == accept[j])
			{
                m = 1;
                break;
			}
            j++;
        }
        if(!m)
        return(i);
    i++;
    }
    return(i);
}