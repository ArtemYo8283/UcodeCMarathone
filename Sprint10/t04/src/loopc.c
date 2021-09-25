#include "header.h"
void loopc (int *count, int file, char *argv) {
    char ch;
    char *str = NULL;
    while (read(file, &ch, 1)) {
        count[2]++;
        if (ch == '\n')
        {
            count[0]++;
        }
    }
    str = mx_file_to_str(argv);
    for (int j = 0; str[j] != '\0'; j++) 
    {
        if (mx_isspace(str[j]))
        {
            str[j] = ' ';
        }
    }
    count[1] = mx_count_words(str, ' ');
}

