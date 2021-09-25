#include "list.h"

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) 
{
    t_list *tmp = (*list)->next;
    t_list *tmp1 = *list;
    if (tmp)
    {
        while (tmp->next) 
        {
            if (cmp(tmp->data, del_data)) 
            {
                tmp1->next = tmp->next;
                free(tmp);
                tmp = tmp1->next;
            }
            else 
            {
                tmp1 = tmp1->next;
                tmp = tmp->next;
            }
        }
        if (cmp(tmp->data, del_data)) 
        {
            tmp1->next = NULL;
            free(tmp);
        }
        tmp = *list;
        if (cmp(tmp->data, del_data)) 
        {
            (*list) = (*list)->next;
            free(tmp);
        }
    }
    else
    {
        if (cmp(tmp1->data, del_data))
        {
            free(*list);
        }
    }
}


