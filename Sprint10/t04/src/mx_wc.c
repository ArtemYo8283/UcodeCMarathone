#include "header.h"

static int *wc_function (int argc, char *argv[], int *total)
{
    int count[3] = {0, 0, 0};
    int file;
    for (int i = 1; i < argc; i++)
    {
        count[0] = 0;
        count[1] = 0;
        count[2] = 0;
        print_err(argv[i], file, 1);
        file = open(argv[i], O_RDONLY);
        print_err(argv[i], file, 2);
        loopc(count, file, argv[i]);
        print_count(count, 2);
        mx_printstr(argv[i]);
        mx_printchar('\n');
        total[0] += count[0];
        total[1] += count[1];
        total[2] += count[2];
        close(file);
    }
    return total;
}

int main(int argc, char *argv[]) {
    int count[4];
    int total[3];
    char *str = NULL;
    char buff[1024];
    if (argc == 1) 
    {
        while ((count[3] = read(0, &buff, sizeof(buff)))) 
        {
            buff[count[3]] = '\0';
            str = mx_strjoin(buff, str);
            count[0]++;
            for (int i = 0; str[i] != '\0'; i++)
            {
                if (mx_isspace(str[i]))
                {
                    str[i] = ' ';
                }
            }
            count[1] = mx_count_words(str, ' ');
        }
        count[2] = mx_strlen(str);
        print_count(count, 1);
    }
    wc_function(argc, argv, total);
    if (argc > 2)
    {
        mx_print_total(total);
    }
    return 0;
}

