#include <stdbool.h>
bool mx_islower(int i)
{
    if(i > 96 && i < 123)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
