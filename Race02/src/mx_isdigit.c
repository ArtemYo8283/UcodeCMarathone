#include "header.h"

bool mx_isdigit(int i) {
    if (i > 47 && i < 58) {
        return 1;
    }
    else {
        return 0;
    }
}

