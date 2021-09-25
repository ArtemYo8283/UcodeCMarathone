#include "list.h"

void mx_foreach_list(t_list *list, void (*f)(t_list *node)) 
{
    t_list *tmp = list;
    if (tmp || f)
    {
        while (tmp) 
        {
            f(tmp);
            tmp = tmp->next;
        }
    }
}

