#include <stdlib.h>

/*
    size = index content length without '\0'
    returns str
*/
char    *malloc_new_str(char *str, int size) {
    str = (char *)malloc(sizeof(char) * (size + 1));
    if (!str)
        exit(0);
    return str;
}