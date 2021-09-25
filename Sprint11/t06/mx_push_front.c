#include "list.h"

void mx_push_front(t_list **list, void *data) {
    t_list *tmp = mx_create_node(data);
    if (*list == NULL)
    {
        *list = tmp;
    }
    else 
    {
        tmp->next = *list;
        *list = tmp;
    }
}

