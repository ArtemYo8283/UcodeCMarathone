#include <stdlib.h>
int *mx_copy_int_arr(const int *src, int size);
int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    for (int i = 0; i < src_size; i++) {
        for (int j = i + 1; j < src_size; j++) {
            if (src[i] == src[j]) {
                for (int n = j; n < src_size - 1; n++) {
                    src[n] = src[n + 1];
                }
                if (src[i] == src[j]) {
                    j--;
                }
                src_size--;
            }
        }
    }
    *dst_size = src_size;
    int *istr = (int*)malloc(*dst_size);
    istr = mx_copy_int_arr(src, *dst_size);
    return istr;
}

