#include <stdio.h>
#include <stdlib.h>
#include "list.h"    // твой list.h с t_list

t_list  *sort_list(t_list *lst, int (*cmp)(int, int))
{
    t_list  *start = lst;
    int     tmp;

    if (!lst)
        return (lst);

    while (lst && lst->next)
    {
        if (!cmp(lst->data, lst->next->data))
        {
            tmp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = tmp;
            lst = start;          // начинаем проход заново
        }
        else
            lst = lst->next;      // идём дальше по списку
    }
    return (start);
}

int ascending(int a, int b)
{
    return (a <= b);
}

void    print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d ", lst->data);
        lst = lst->next;
    }
    printf("\n");
}

t_list  *new_node(int data)
{
    t_list *n = malloc(sizeof(t_list));
    if (!n)
        return (NULL);
    n->data = data;
    n->next = NULL;
    return (n);
}

int main(void)
{
    t_list *a = new_node(4);
    t_list *b = new_node(1);
    t_list *c = new_node(7);
    t_list *d = new_node(5);
    t_list *e = new_node(4);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    printf("Before:\n");
    print_list(a);

    a = sort_list(a, ascending);

    printf("After:\n");
    print_list(a);

    return (0);
}
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *start = lst;
    int t = 0;

    while(lst && lst->next)
    {
        if(!cmp(lst->data < lst->next->data ))
        {
            t = lst->data;
            lst->data = lst->next->data;
            lst->next->data = t;
            lst = start;
        }
        else 
            lst = lst->next;
        
    }
    return start;
}