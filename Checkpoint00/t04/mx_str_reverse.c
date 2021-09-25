void mx_str_reverse(char *s) {
    char *buff = s;
    char c;
    int size = 0;
    for (; buff[size] != '\0'; size++);
    for (int i = 0, j = size - 1; i < size/2; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

