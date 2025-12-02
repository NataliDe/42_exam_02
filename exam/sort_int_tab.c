#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = i + 1;
    
    int t;
    while(i < size - 1)
    {
         while(j < size) 
         {
            j = i + 1;
            while(tab[i] > tab[j])
            {
                t = tab[i];
                tab[i] = tab[j];
                tab[j] = t;
            }
            j++;
         }
         i++;
    }
}


