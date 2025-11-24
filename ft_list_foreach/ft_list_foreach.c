#include "ft_list_foreach.h"
void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    while(begin_list)
    {
        (*f)(begin_list->data);
        begin_list = begin_list -> next;
    }
}

/*
#include <stdio.h>
#include "ft_list.h"

void print_str(void *data)
{
    printf("%s\n", (char *)data);
}

int main()
{
    t_list a = {0, "Hello"};
    t_list b = {0, "World"};
    a.next = &b;

    ft_list_foreach(&a, &print_str);
}*/