#include "header.h"

int mx_count_words(const char *str, char delimiter)
{
    int words = 0;
    int i = 0;
    for(; str[i] != '\0'; i++)
    {
        if(str[i] == delimiter && str[i+1] != delimiter)
        {
            words++;
        }
    }
    if(str[0] == delimiter)
    {
        words--;
    }
    if(str[i-1] == delimiter)
    {
        words--;
    }
    words++;
    return words;
}
