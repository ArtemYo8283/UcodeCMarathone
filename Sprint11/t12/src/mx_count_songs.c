#include "list.h"

int mx_count_songs(char *src) {
    int count = 0;
    bool exit = false;
    while(src[0] != '\0') {
        while(!exit)
            if(src[0] != '\n')
                if(src[0] != ',')
                    src++;
                else {
                    exit = true;
                    src++;
                }
            else {
                return -1;
            }
        
        while (!mx_isspace(src[0]))
            src++;
        if (src[0] == '\n')
            count++;
        src++;
    }
    return count;
}

