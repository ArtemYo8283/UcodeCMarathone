#include <stdbool.h>
bool mx_isupper(int i)
{
    if(i > 64 && i < 91)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
