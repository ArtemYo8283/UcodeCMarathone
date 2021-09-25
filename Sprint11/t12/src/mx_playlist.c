#include "list.h"

int main(int argc, char *argv[]) {
    enum e_operation operation = NONE;

    if (argc < 3)
    {
        write(2, "usage: ./playlist [file] [command] [args]\n", 42);
        return 1;
    }
    if (mx_strncmp(argv[2], "add", 3) == 0)
    {
        if (argc == 5)
        {
            operation = ADD;
        }
        else
        {
            write(2, "ERROR\n", 6);
            return 0;
        }
    }
    else if (mx_strncmp(argv[2], "remove", 6) == 0)
    {
        if (argc == 4)
        {
            operation = REMOVE;
        }
        else
        {
            write(2, "ERROR\n", 6);
            return 0;
        }
    }
    else if (mx_strncmp(argv[2], "sort", 4) == 0)
    {
        if (argc == 4)
        {
            operation = SORT;
        }
        else
        {
            write(2, "ERROR\n", 6);
            return 0;
        }
    }
    else if (mx_strncmp(argv[2], "print", 5) == 0)
    {
        if (argc == 3)
        {
            operation = PRINT;
        }
        else
        {
            write(2, "ERROR\n", 6);
            return 0;
        }
    }
    if (operation == NONE)
    {
        write(2, "ERROR\n", 6);
        return 0;
    }
    char *artist;
    char *name;
    char *index;
    char *src_text = mx_file_to_str(argv[1]);

    if(src_text != NULL)
    {   
        int songs_count = mx_count_songs(src_text);
        if(songs_count < 0)
        {
            write(2, "ERROR1\n", 6);
            return 0;
        }
        t_list *songs_list = mx_parse_songs(src_text, songs_count);
        if(songs_list == NULL)
        {
            write(2, "ERROR\n", 6);
            return 0;
        }
        switch (operation) 
        {
            case ADD: 
                artist = argv[3];
                name = argv[4];
                mx_push_back(songs_list, artist, name);
                mx_write_list_to_file(argv[1], songs_list);
                mx_clear_list(&songs_list);
                break;

            case REMOVE:
                index = argv[3];
                int file = open(argv[1], O_CREAT | O_RDWR | O_APPEND, S_IWUSR | S_IRUSR);
                if (file < 0) {
                    write(2, "ERROR\n", 6);
                    return 0;
                }
                int index = mx_atoi(argv[3]);
                int max_count = 0, count_of_symbols = 0, count = 0;
                char buffer;
            
                while (read(file, &buffer, 1)) {
                    if (buffer == '\n') max_count++;
                    if (index == max_count) continue;
                    count_of_symbols++;
                }
                if (close(file) < 0)
                {
                    write(2, "ERROR\n", 6);
                    return 0;            
                }
                if (index < 0 || index >= max_count)
                {
                    write(2, "ERROR\n", 6);
                    return 0;            
                }
                char *arr = (char*)malloc(count_of_symbols);
                file = open(argv[1], O_CREAT | O_RDWR | O_APPEND, S_IWUSR | S_IRUSR);
                if (file < 0)
                {
                    write(2, "ERROR\n", 6);
                    return 0;
                }
                int i = 0;
                while (read(file, &buffer, 1))
                {
                    if (buffer == '\n') count++;
                    if (index == count) continue;
                    arr[i++] = buffer;
                }
                while (arr[i]) arr[i++] = '\0';
                if (close(file) < 0)
                {
                    write(2, "ERROR\n", 6);
                    return 0;           
                }
                if (remove(argv[1]) < 0)
                {
                    write(2, "ERROR\n", 6);
                    return 0;                               
                }
                file = open(argv[1], O_CREAT | O_RDWR | O_APPEND, S_IWUSR | S_IRUSR);
                if (index == 0) write(file, arr + 1, mx_strlen(arr + 1));
                else write(file, arr, mx_strlen(arr));
                if (close(file) < 0)
                {
                    write(2, "ERROR\n", 6);
                    return 0;            
                }
                free(arr);
                arr = NULL;
                break;

            case SORT:
                if (mx_strncmp(argv[3], "artist", 7) == 0) 
                {
                    songs_list = mx_sort_list_artist(songs_list);
                    mx_write_list_to_file(argv[1], songs_list);
                    mx_clear_list(&songs_list);
                }
                else if (mx_strncmp(argv[3], "name", 5) == 0) 
                {
                    songs_list = mx_sort_list_name(songs_list);
                    mx_write_list_to_file(argv[1], songs_list);
                    mx_clear_list(&songs_list);
                }
                else
                {
                    write(2, "ERROR\n", 6);
                    return 0;
                }
                break;

            case PRINT:
                mx_print_list(songs_list);
                mx_clear_list(&songs_list);
                break;

            case NONE:
                mx_clear_list(&songs_list);
                write(2, "ERROR\n", 6);
                return 0;
                break;
        }
        return 0;
    }
    write(2, "ERROR\n", 6);
    return 0;
}

