#include "list.h"

void mx_clear_list(t_list **list) {
    t_list *tmp;
    while (*list) 
    {
        tmp = NULL;
        if (list) 
        {
            tmp = (*list)->next;
            free(*list);
            *list = tmp;
        }
    }
}

