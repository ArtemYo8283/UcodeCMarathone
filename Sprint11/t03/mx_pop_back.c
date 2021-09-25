#include "list.h"

void mx_pop_back(t_list **list) {
    t_list *tmp = *list;
    if (tmp->next == NULL) 
    {
        free(*list);
        *list = NULL;
    }
    else 
    {
        while (tmp->next->next)
        {
            tmp = tmp->next;
        }
        free(tmp->next);
        tmp->next = NULL;
    }
}

