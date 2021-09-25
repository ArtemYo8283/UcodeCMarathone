#include "header.h"

int mx_strncmp(const char *s1, const char *s2, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(s2[i] != s1[i])
        {
            return 1;
        }
    }
    return 0;
}


