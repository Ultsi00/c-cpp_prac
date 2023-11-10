#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
input: positive integer.
use recursion to check if the number is a palindrome.
*/
static unsigned short int str_len(char *str) {
    unsigned short int len = 0;

    while (*str != '\0') {
        str++;
        len++;
    } 
    return len;
}

static int is_palindrome(char *str, unsigned short int len, int i) {
    if (str[i] != str[(len - 1) - i])
        return 0;
    if (i >= (len - 1) - i)
        return 1;
    is_palindrome(str, len, i + 1);
}

static void put_str(char *str) {
    while (*str != '\0') {
        write(1, str, 1);
        str++;
    }
}

int main(int argc, char **argv) {
    if (argc != 2)
        exit(0);
    unsigned short int len = 0;

    len = str_len(argv[1]);
    if (is_palindrome(argv[1], len, 0) == 1)
        put_str("Number IS a palindrome.\n");
    else
        put_str("Number IS NOT a palindrome.\n");
    return 0;
}
