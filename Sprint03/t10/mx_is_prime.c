#include <stdbool.h>
bool mx_is_prime(int num)
{
    int count = 0;
    for(int i = 1; i <= num; i++)
    {
        if(num % i == 0)
        {
            count++;
        }
    }
    if(count == 2)
    {
        return true;
    }
    else
    {
        return false;
    }
}
