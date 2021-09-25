int mx_strcmp(const char *s1, const char *s2);
int mx_binary_search(char **arr, int size, const char *s, int *count)
{
    int id = 0;
    for (int left = 0, right = size - 1; left <= right; ) { 
        id = left + (right - left) / 2; 
        *count += 1;
        if (mx_strcmp(s, arr[id]) == 0)
        {
        	return id; 
        }
        if (mx_strcmp(s, arr[id]) > 0)
        {
        	left = id + 1; 
        }
        else
        {
        	right = id - 1; 
        }
    } 
    *count = 0;
    return -1;
}

