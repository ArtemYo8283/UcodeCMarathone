#include <stdbool.h>
bool mx_isdigit(int i);
bool mx_isspace(int i);
int mx_atoi(const char *str) 
{
    int size = 0;
    int i = 0;
    int j = 0;
    int minus = 1;
    if (str[0] == '-')
    {
      j = 1;
      minus = 0;
    }
    while (str[i] != '\0') 
    {
        if (mx_isdigit(str[i]))
        {
            size++;
        }
        i++;
    }
    int num = 0;
    int res = 1;
    for ( ; str[j] != '\0'; j++)
    {
        res = 1;
        for (int m = 0; m < (size - j - minus); m++) 
        {
            res *= 10;
        }
        num += (str[j] - 48) * res;
    }
    if(minus == 0)
    {
        num *= -1;
    }
    return num;
}

