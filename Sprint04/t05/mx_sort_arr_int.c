void mx_sort_arr_int(int *arr, int size)
{
    int buff = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(arr[i] < arr[j])
            {
                buff = arr[j];
                arr[j] = arr[i];
                arr[i] = buff;
            }
        }
    }
}

