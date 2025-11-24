#ifndef FT_LIST_FOREACH 
#define FT_LIST_FOREACH
#include <stdlib.h>

typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#endif
