#include "header.h"

char *mx_strcat(char *s1, const char *s2)
{
    int size1 = mx_strlen(s1);
    int size2 = mx_strlen(s2);
    for(int i = size1, j = 0; j < size2; i++, j++)
    {
        s1[i] = s2[j];
    }
    return s1;
}

