void mx_arr_rotate(int *arr, int size, int shift)
{
    int buff = 0;
    int obuff = 0;
    int buffar[size];
    for (int i = 0; i < size; i++)
    {
        buffar[i] = arr[i];
    }
    if (shift > 0)
    {
        for(int i = 0; i < shift; i++)
        {
            obuff = arr[size - 1];
            for(int j = 0; j < size; j++)
            {
                buff = buffar[j];
                arr[j+1] = buff;
            }
            arr[0] = obuff;
            for (int i = 0; i < size; i++)
            {
                buffar[i] = arr[i];
            }
        }
    }
    else if (shift < 0)
    {
        for(int i = shift; i < 0; i++)
        {
            obuff = arr[0];
            for(int j = size - 1; j > 0; j--)
            {
                buff = buffar[j];
                arr[j-1] = buff;
            }
            arr[size - 1] = obuff;
            for (int i = 0; i < size; i++)
            {
                buffar[i] = arr[i];
            }
        }
    }
}

