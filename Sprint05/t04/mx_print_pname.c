void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);
int main(int argc, char *argv[]) 
{
    char *a = argv[0];
    int id = 0;
    argc = 0;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if(a[i] == '/')
        {
            id = i;
        }
    }
    for (int i = id + 1; a[i] != '\0'; i++)
    {
        mx_printchar(a[i]);
    }
    mx_printchar('\n');
    return 0;
}

