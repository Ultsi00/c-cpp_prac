#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
input: char str of positive numbers.
sum of digits using recursion
*/
unsigned int sum_digits(char *nb_str, int len) {
    int nb = 0, sum = 0, i = 0;

    while(nb_str[i] != '\0') {
        nb = nb_str[i] - '0';
        i++;
        sum = sum + nb;
    }
    return sum;
}

int main(int argc, char **argv) {
    if (argc != 2)
        exit(0);

    int len = 0;
    for(int i = 0; argv[1][i] != '\0'; i++)
        len++;
    printf("sum: %d\n", (sum_digits(argv[1], len)));
    return 0;
}
