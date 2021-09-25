#include <stdbool.h>
double mx_pow(double n, unsigned int pow);
bool mx_is_narcissistic(int num)
{
    int buff = 0;
    int sum = 0;
    int count = 0;
    buff = num;
    for(int i = 0; buff > 0; i++)
    {
        buff /= 10;
        count++;
    }
    buff = num;
    while(num > 0)
    {
        sum += mx_pow(num % 10, count);
        num /= 10;
    }
    if(sum == num)
    {
        return true;
    }
    else
    {
        return false;
    }
}
