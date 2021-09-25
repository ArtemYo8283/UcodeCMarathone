bool mx_islower(int i);
bool mx_isupper(int i);
int mx_tolower(int i);
int mx_toupper(int i);
void mx_reverse_case(char *s)
{
    char c;
    for(int i = 0; s[i] != '\0'; i++)
    {
        if(mx_islower(s[i]) == 1)
        {
            c = s[i];
            c = mx_toupper(c);
            s[i] = c;
        }
        else if(mx_isupper(s[i]) == 1)
        {
            c = s[i];
            c = mx_tolower(c);
            s[i] = c;
        }
    }
}
