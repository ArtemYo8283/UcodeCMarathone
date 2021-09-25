#include <stdbool.h>
void mx_sort(int *arr, int size, bool(*f)(int, int)) {
    int tmp = 0;
    for (int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(!(*f)(arr[i], arr[j]))
            {
                tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
}

