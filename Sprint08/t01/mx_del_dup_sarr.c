#include "duplicate.h"

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    if (src->arr == NULL) 
    {
        return NULL;
    }
    int k = 0;
    t_intarr *res = (t_intarr*)malloc(16);
    int minus = 0;
    int rep;
    for (int i = 0; i < src -> size; i++) 
    {
        for (int j = 0; j < i; j++) {
            if (src -> arr[j] == src -> arr[i]) 
            {
                minus++;
                break;
            }
        }
    }
    res->size = src->size - minus;
    res->arr = mx_copy_int_arr(src->arr, res->size);
    for (int i = 0; i < src->size; i++) 
    {
        rep = 0;
        for (int j = 0; j < i; j++) 
        {
            if (src->arr[j] == src->arr[i] && k < res->size) 
            {
                rep = 1;
                break;
            }
        }
        if (rep == 0)
        {
            res->arr[k++] = src->arr[i];
        }
    }    
    return res;
}

