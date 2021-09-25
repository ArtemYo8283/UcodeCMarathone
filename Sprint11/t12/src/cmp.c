#include "list.h"
bool cmp(void *a, void *b) {
    if (mx_strcmp_changed((char*)(a), (char*)(b)) > 0) 
    {
        return true;
    }
    return false;
}

