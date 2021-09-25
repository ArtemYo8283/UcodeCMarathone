#include "header.h"

char *mx_strncpy(char *dst, const char *src, int len)
{
    int i = 0;
    for(; i < len; i++)
    {
        if(src[i] == '\0')
        {
            break;
        }
        dst[i] = src[i];
    }
    dst[i] = '\0';
    return dst;
}


