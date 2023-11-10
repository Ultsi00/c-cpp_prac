static unsigned int str_len(char *str) {
    unsigned int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
        len++;
    return len;
}

/*
    sets int* values argv (2d).
    each elem value is the length of each argv[i].
        length is without counting in '\0'
*/
void set_strs_len(int argc, char **argv, int *strs_len) {
    int i = 0;
    int j = 1;

    while (j < argc) {
        strs_len[i] = str_len(argv[j]);
        i++;
        j++;
    }
}
