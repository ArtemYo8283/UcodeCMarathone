#include "list.h"

t_list *mx_parse_songs(char *src, int count) {
    t_list *dst = NULL;
    int n_count, i = 0;
    char *artist = NULL;
    char *name = NULL;
    char *p = src;
    if (p) {
        for(; i < count; i++) {
            n_count = 0;
            while (p[n_count] != ',')
                n_count++;
            artist = mx_strnew(n_count);
            artist = mx_strncpy(artist, p, n_count);
            p = mx_strstr(p, ",");
            p++;

            n_count = 0;
            while (p[n_count] != '\n')
                n_count++;
            name = mx_strnew(n_count);
            name = mx_strncpy(name, p, n_count);
            p = mx_strstr(p, "\n");
            if(i < (count - 1))
                p++;
            
            if(dst == NULL)
            {
                dst = mx_create_node();
                dst->artist = artist;
                dst->name = name;
                dst->next = NULL;
            }
            else
                mx_push_back(dst, artist, name);
        }
        
        return dst;
    }
    return NULL;
}
