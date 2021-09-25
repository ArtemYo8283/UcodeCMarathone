#include <stdbool.h>
bool mx_isdigit(int i);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printint(int n);
int mx_atoi(const char *str);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    if(argc == 3 || mx_isdigit(mx_atoi(argv[1])) == 1|| mx_isdigit(mx_atoi(argv[2])) == 1)
    {
        if (mx_atoi(argv[1]) > 0 && mx_atoi(argv[1]) < 10 && mx_atoi(argv[2]) > 0 && mx_atoi(argv[2]) < 10) 
        {
            if(mx_atoi(argv[1]) == mx_atoi(argv[2]))
            {
                mx_printint(mx_atoi(argv[1]) * mx_atoi(argv[2]));
                mx_printchar('\n');
            }
            else if(mx_atoi(argv[1]) < mx_atoi(argv[2]))
            {
                for (int i = mx_atoi(argv[1]); i <= mx_atoi(argv[2]); i++)
                {
                    for (int j = mx_atoi(argv[1]); j <= mx_atoi(argv[2]);j++)
                    {
                        mx_printint(i * j);
                        if(j < mx_atoi(argv[2]))
                        {
                            mx_printchar('\t');
                        }
                    }
                    mx_printchar('\n');
                }
            }
            else
            {
                for (int i = mx_atoi(argv[2]); i <= mx_atoi(argv[1]); i++)
                {
                    for (int j = mx_atoi(argv[2]); j <= mx_atoi(argv[1]) ;j++)
                    {
                        mx_printint(i * j);
                        if(j < mx_atoi(argv[1]))
                        {
                            mx_printchar('\t');
                        }
                    }
                    mx_printchar('\n');
                }
            }
        }
    }
    return 0;
}

