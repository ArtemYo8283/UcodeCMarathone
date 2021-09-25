int mx_popular_int(const int *arr, int size)
{
    int count_new = 0;
    int count_old = 0;
    int buff = arr[0];
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(arr[j] == arr[i])
            {
                count_new++;
            }
        }
        if(count_new > count_old)
        {
            buff = arr[i];
            count_old = count_new;
        }
        count_new = 0;
    }
    return buff;
}

