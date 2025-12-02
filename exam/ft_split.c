#include <stdlib.h>
int count_w( char *str)
{
    int c = 0;
    int i = 0;
    while (str[i])
    {
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        {
            i++;
        }
        if (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
        {
            c++;
                while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
                    i++;
        }
    }
    return (c);
}
char    **ft_split(char *str)
{
    int word;
    
    int i = 0;
    int j = 0;
    int len;
    char **split;

    word = count_w(str);
    split = (char **)malloc(sizeof(char *) * (word + 1));
    if (!split)
        return NULL;
        while(str[i] && j < word)
        {
             while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
                 i++;
            int s = 0;
            s = i;
             while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
                 i++;
            int f = 0;
            f = i;
            split[j] = (char *)malloc(sizeof(char) * (f - s + 1));
            if (!split[j])
            return NULL;
            int k = 0;
            while(s < f)
                {
                    split[j][k] = str[s];
                    k++;
                    s++;
                }
            split[j][k] = '\0';
            j++;
        }
        split[j] = NULL;
    return (split);
}
#include <stdio.h>
#include <stdlib.h>

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