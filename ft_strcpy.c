char    *ft_strcpy(char *s1, char *s2)
{
    int i;
     i = 0;
     while(s2[i])
     {
        s1[1] = s2[i];
        i++;
     }
     s1[i] = '\0';
     return (s1);
}