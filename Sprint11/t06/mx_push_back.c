#include "list.h"

void mx_push_back(t_list **list, void *data) {
    t_list *tmp = mx_create_node(data);
    t_list *buff = *list;
    if (*list == NULL)
    {
        *list = tmp;
    }
    else 
    {
        while (buff->next)
        {
            buff = buff->next;
        }
        buff->next = tmp;
    }
}

