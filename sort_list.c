/*Assignment name  : sort_list
Expected files   : sort_list.c
Allowed functions:
--------------------------------------------------------------------------------

Write the following functions:

t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

This function must sort the list given as a parameter, using the function
pointer cmp to select the order to apply, and returns a pointer to the
first element of the sorted list.

Duplications must remain.

Inputs will always be consistent.

You must use the type t_list described in the file list.h
that is provided to you. You must include that file
(#include "list.h"), but you must not turn it in. We will use our own
to compile your assignment.

Functions passed as cmp will always return a value different from
0 if a and b are in the right order, 0 otherwise.

For example, the following function used as cmp will sort the list
in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}*/
#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int t;
    t_list *st;

    st = lst;
    while(lst && lst ->next)
    {
        if(!cmp(lst->data, lst ->next->data))
        {
            t = lst->data;
            lst->data = lst ->next->data;
            lst ->next->data = t;
            lst = st;
        }
        else
        {
            lst = lst->next;
        }
    }
    return(st);
}
int main(void)
{
    void print_list( size_t *lst)
    {
        while(lst)
        {
            printf("%d , lst->data");
            lst = lst->next;
        }
    }

    int ascending(int a, int b)
{
	return (a <= b);
}

    t_list new(int data)
    {
        t_list *n = malloc(sizeof(t_list));
        n->data = data;
        n->naxt = NULL;
        return(n);
    }
    t_list *a = new(4);
    t_list *b = new(1);
    t_list *c = new(7);
    t_list *d = new(5);
    t_list *e = new(4);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    print_list(a);

    a = sort_list(a, ascending);
    print_list(a);
    return (0);
}