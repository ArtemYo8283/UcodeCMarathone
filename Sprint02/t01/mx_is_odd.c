#include <stdbool.h>
bool mx_is_odd(int i)
{
    if(i % 2 == 0)
    {
        return false;
    }
    else if(i % 2 != 0)
    {
        return true;
    }
}
