int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_selection_sort(char **arr, int size)
{
    char* buff = 0;
    int count = 0;
    int minid = 0;
    int flag = 0;
    for (int i = 0; i < size - 1; i++) 
    {
        minid = i;
        for (int j = i + 1; j < size; j++) 
        {
            if (mx_strcmp(arr[minid], arr[j]) > 0) 
            {
                arr[minid] = arr[j];
                minid = j;
                flag++;
            }
        }
        if (flag > 0) 
        {
            buff = arr[minid];
            arr[minid] = arr[i];
            arr[i] = buff;
            count++;
        }
        flag = 0;
    }
    return count;
}

