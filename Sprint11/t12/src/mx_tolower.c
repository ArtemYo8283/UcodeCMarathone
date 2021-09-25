#include "list.h"
int mx_tolower(int i)
{
    if(i > 64 && i < 91)
    {
        return (i+32);
    }
    else if(i > 96 && i < 123)
    {
        return i;
    }
    return 0;
}

