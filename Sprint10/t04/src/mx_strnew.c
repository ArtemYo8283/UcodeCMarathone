#include "header.h"

char *mx_strnew(const int size) {
    if (size < 1) 
    {
        return NULL;
    }
    else 
    {
        char *str = malloc(size+1);
        for (int i = 0; i < size; i++) 
        {
            str[i] = '\0';
        }
        str[size] = '\0';
        return str;
    }
}

