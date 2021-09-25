#include <unistd.h>
int mx_strlen(const char *s) 
{
    int count = 0;
    while (*s != 0) {
        count++;
        ++s;
    }
    return count;
}
void mx_printchar(char c) 
{
    write(1, &c, 1);
}
void mx_printstr(const char *s) 
{
    write(1, s, mx_strlen(s));
}
int main(int argc, char const *argv[]) {
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++) {
            mx_printstr(argv[i]);
            mx_printchar('\n');
        }
    }
    return 0;
}

