void mx_printchar(char c);
void mx_str_separate(const char *str, char delim)
{
    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == delim)
        {
            if(str[i+1] == str[i])
            {
                continue;
            }
            mx_printchar('\n');
            for(int j = i; str[j] != '\0'; j++)
            {
                mx_printchar(str[j]);
            }
            mx_printchar('\n');
            break;
        }
        mx_printchar(str[i]);
    }
}
