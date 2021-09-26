#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    unsigned long base = 1;
    unsigned long result = 0;

    if (!hex)
    {
        return 0;
    }
    for (int i = mx_strlen(hex) - 1; i >= 0; i--) 
    {
        if (mx_isdigit(hex[i])) 
        {
            result += (hex[i] - 48) * base;
            base *= 16;
        }
        else if (mx_isupper(hex[i])) 
        {
            result += (hex[i] - 55) * base;
            base *= 16;
        }
        else if (mx_islower(hex[i])) 
        {
            result += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    return result;
}

