#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
swap integers
*/
static void swap_int(int *a, int *b) {
    int temp = 0;

    temp = *b;
    *b = *a;
    *a = temp;
    printf("'temp' mem.add: %p\n", &temp);
}

int main(int argc, char **argv) {
    int a = 1;
    int b = 33;

    printf("a0: %d | b0: %d\n'a' mem.add: %p | 'b' mem.add: %p\n", a, b, &a, &b);
    swap_int(&a, &b);
    printf("a1: %d | b1: %d\n'a' mem.add: %p | 'b' mem.add: %p\n", a, b, &a, &b);
    return 0;
}
