/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/


#include <stdlib.h>
int it_spase(char c)
{
    if(c == ' ' || c == '\t' || c == '\n')
        return (1);
    return (0);

}

int ft_wcount(char *str)
{
    int i;
    int count;
    count = 0;
    i = 0;
    while(str[i])
    {
        while(str[i] && it_spase(str[i]))
        {
            i++;
        }
        if(!str[i])
            break;
        while(str[i] && !it_spase(str[i]))
        {
            i++;
        }
        count++;
    }
    return(count);
}
char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int words;
    int start;
    int len;
    char **split;


    words = ft_wcount(str);
    split = (char **)malloc(sizeof(char *) * (words + 1));
    if (!split)
        return(NULL);
    while(str[i] != '\0' && j < words)
    {
        while(str[i] && it_spase(str[i]))
        {
            i++;
        }
        if(!str[i])
            break;
        start = i;
        while(str[i] && !it_spase(str[i]))
        {
            i++;
        }
        len = i - start;
        split[j] = (char *)malloc(sizeof(char) * (len + 1));
        if(!split[j])
            return (NULL);
        len = 0;
        while(start < i)
        {
            split[j][len++] = str[start++];
        }
        split[j][len] = '\0';
        j++;
    }
split[j] = NULL;
return (split);
}
#include <stdio.h>
#include <stdlib.h>

char    **ft_split(char *str);

int main(void)
{
    char **tab = ft_split("  Hello\tworld\n42  school ");
    int i = 0;

    while (tab[i])
    {
        printf("word[%d]: %s\n", i, tab[i]);
        i++;
    }
    return 0;
}