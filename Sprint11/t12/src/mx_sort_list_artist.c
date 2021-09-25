#include "list.h"

static void swap(char **s1, char **s2) 
{
    char *temp = *s1;
    *s1 = *s2;
    *s2 = temp;
}
t_list *mx_sort_list_artist(t_list *list) {
    if (list)
    {
        for (t_list *temp1 = list; temp1; temp1 = temp1->next)
        {
            for (t_list *temp2 = list; temp2->next; temp2 = temp2->next)
            {
                if (cmp(temp2->artist, temp2->next->artist))
                {
                    swap(&temp2->artist, &temp2->next->artist);  
                    swap(&temp2->name, &temp2->next->name);  
                }
            }
        }
    }
    return list;
}

