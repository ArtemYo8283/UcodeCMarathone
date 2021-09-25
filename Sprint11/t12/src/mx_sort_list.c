#include "list.h"

// t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
//     t_list *tmp;
//     t_list *tmp1;
//     void *buff;
//     if (list != NULL) 
//     {
//         while (list->next != NULL) 
//         {
//             tmp = list;
//             tmp1 = tmp->next;
//             while (tmp1 != NULL)
//             {
//                 if (cmp(tmp->data, tmp->next->data))
//                 {
//                     buff = tmp->next->data;
//                     tmp->next->data = tmp->data;
//                     tmp->data = buff;
//                 }
//                 tmp1 = tmp1->next;
//             } 
//             list = list->next;
//         }
//     }
//     return list;
// }

