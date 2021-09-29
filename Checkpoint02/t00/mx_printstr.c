#include <unistd.h>
int mx_strlen(const char *s)
{
    int i = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    return i;
}
void mx_printstr(const char *s)
{
    write(1, s, mx_strlen(s));
}

