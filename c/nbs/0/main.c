#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
reverse string
*/
unsigned short int str_len(char *str) {
    unsigned short int len;

    len = 0;
    while (*str != '\0') {
        str++;
        len++;
    }
    return len;
}

int main (int argc, char **argv) {
    unsigned short int len;

    if (argc != 2 || argv[1][0] == '-')
        exit(0);
    len = str_len(argv[1]);
    while (len > 0) {
        write(1, &argv[1][len - 1], 1);
        len--;
    }
    write(1, "\n", 1);
}
