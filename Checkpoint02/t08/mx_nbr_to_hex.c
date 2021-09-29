#include <stdlib.h>
int mx_strlen(const char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}

char* mx_nbr_to_hex(unsigned long nbr) {
    char *arr = mx_strnew(50);
    int tmp = 0;
    for (int i = 0; nbr != 0; i++) 
    {
        tmp = 0;
        tmp = nbr % 16;
        if(tmp > 10) 
        {
            arr[i] = tmp + 87;
        }
        else 
        {
            arr[i] = tmp + 48;  
        }
        nbr /= 16;
    }
    int len = mx_strlen(arr);
    char *istr = mx_strnew(len);
    for (int i = 0; i < len; i++)
    {
        istr[i] = arr[len - i - 1];
    }
    return istr;
}

