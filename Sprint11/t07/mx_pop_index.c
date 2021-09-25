#include "list.h"

int mx_list_size(t_list *list) {
    t_list *tmp = list;
    int size = 0;
    if (list == NULL)
    {
        return 0;
    }
    while (tmp) 
    {
        tmp = tmp->next;
        size++;
    }
    return size;
}

void mx_pop_index(t_list **list, int index) {
    t_list *tmp = *list;
    if (index < 1)
    {
        mx_pop_front(list);
    }
    else if (index > mx_list_size(tmp))
    {
        mx_pop_back(list);
    }
    else 
    {
        for (int i = 0; tmp; i++) 
        {
            if (i == index - 1) 
            {
                free(tmp->next);
                tmp->next = tmp->next->next;
            }
            tmp = tmp->next;
        }
    }
}

