/*Assignment name  : sort_int_tab
Expected files   : sort_int_tab.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following function:

void sort_int_tab(int *tab, unsigned int size);

It must sort (in-place) the 'tab' int array, that contains exactly 'size'
members, in ascending order.

Doubles must be preserved.

Input is always coherent.*/
#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    unsigned int j;
    int tmp;
    i = 0;
    while(i < size - 1)
    {
        j = i + 1;
        while( j < size)
        {
            while(tab[i] > tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        j++;
        }
    i++;
    }
}

int main(void)
{
    int tab[] = {1,2,4,3,5};
    unsigned int k = 5;
    for (unsigned int i = 0; i < k; i++)
    {
        printf("%d", tab[i]);
        if (i < k - 1)
            printf(" ");
    }
    printf("\n");
    sort_int_tab(tab, k);
    for (unsigned int i = 0; i < k; i++)
    {
        printf("%d", tab[i]);
        if (i < k - 1)
            printf(" ");
    }
    printf("\n");
return 0;
}