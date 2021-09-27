#include "header.h"

bool mx_isspace(char c) {
    switch (c) {
        case ' ':
            return 1;
        break;

        case '\n':
            return 1;
        break;

        case '\t':
            return 1;
        break;

        case '\v':
            return 1;
        break;

        case '\f':
            return 1;
        break;

        case '\r':
            return 1;
        break;
    }
    return 0;
}

