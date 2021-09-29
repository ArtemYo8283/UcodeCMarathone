#include <stdbool.h>
bool mx_isspace(char c) {
    switch (c) {
        case ' ':
            return 1;
        break;

        case '\n':
            return 1;
        break;

        case '\t':
            return 1;
        break;

        case '\v':
            return 1;
        break;

        case '\f':
            return 1;
        break;

        case '\r':
            return 1;
        break;
    }
    return 0;
}
bool mx_isdigit(int i) {
    if (i > 47 && i < 58) 
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
int mx_atoi(const char *str) {
    int result = 0;
    int sign = 0;
    if(*str) 
    {
        while(mx_isspace(*str))
        {
            str++;
        }
        if (*str == '-') {
            sign = 1;
            str++;   
        }
        else if (*str == '+')
        {
            str++; 
        }
        while (mx_isdigit(*str)) {
            result *= 10;
            if (sign == 1)
            {
                result -= *str-48;
            }
            else
            {
                result += *str-48;
            }
            str++;
        }
    }
    return result;
}

