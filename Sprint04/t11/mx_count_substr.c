char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strstr(const char *s1, const char *s2);
int mx_count_substr(const char *str, const char *sub) 
{
    int count = 0;
    const char *buff = str;
    int size = mx_strlen(sub);
    while (mx_strstr(buff, sub)) 
    {
        buff = mx_strstr(buff, sub);
        for (int i = 0; i < size; i++) 
        {
            buff++;
        }
        count++;
    }
    return count;
}

