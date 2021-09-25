#include <stdbool.h>
double mx_pow(double n, unsigned int pow);
bool mx_is_prime(int num);
bool mx_is_mersenne(int n)
{
    for(int i = 0; i < n; i++)
    {
        if(mx_is_prime(i) == 1)
        {
            if(mx_pow(2, i) == n+1)
            {
                return true;
            }
        }
    }
    return false;
}
