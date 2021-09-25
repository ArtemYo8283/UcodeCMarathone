int mx_strlen(const char *s);
int mx_insertion_sort(char **arr, int size)
{
    char* buff = 0;
    int count = 0;
    for(int i = 1; i < size; i++)
    {  
	    for(int j = i; j > 0; j--)
        {
            if(mx_strlen(arr[j-1]) > mx_strlen(arr[j]))
            {
                buff = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = buff;
                count++;
            }
        }
    }
    return count;
}

