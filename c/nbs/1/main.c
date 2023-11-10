#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
armstrong number: sum of cubes of each digit is the number itself
153
1^3 = 1
5^3 = 125
3^3 = 27
1 + 125 + 25 = 153
*/
static unsigned short int str_len(char *str) {
    unsigned short int len = 0;

    while (*str != '\0') {
        str++;
        len++;
    }
    return len;
}

static void put_str(char *str) {
    int i = 0;

    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int argc, char **argv) {
    unsigned short int len;
    int total = 0, nb = 0, i = 0, input_str = 0;

    len = str_len(argv[1]);
    while (i < len) {
        nb = argv[1][i] - '0';
        i++;
        total = total + (nb * nb * nb);
    }
    input_str = atoi(argv[1]);
    if (total != input_str) {
        put_str("Not Armostrong number.\n");
    }
    else
        put_str("Is Armstrong number.\n");
    return 0;
}
