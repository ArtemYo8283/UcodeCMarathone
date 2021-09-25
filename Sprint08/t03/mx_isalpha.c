#include "nbr_to_hex.h"
bool mx_isalpha(int i)
{
    if((i > 64 && i < 91) || (i > 96 && i < 123))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

