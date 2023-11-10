#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
input: 1-digit positive numbers (char)
insert to int[]
arrange in ascending order
print numbers
*/

static void print_nbs(int *nbs, int nb_count) {
    int i = 0;
    char temp;

    while (i < nb_count - 1) {
        temp = nbs[i] + '0';
        write(1, &temp, 1);
        i++;
    }
    write(1, "\n", 1);
}

static void sort_nbs(int *nbs, int nb_count) {
    int temp = 0, i = 0, j = 0;
    
    while (j < nb_count - 2) {
        i = 0;
        while (i < nb_count - 2) {
            if (nbs[i] > nbs[i + 1]) {
                temp = nbs[i + 1];
                nbs[i + 1] = nbs[i];
                nbs[i] = temp;
            }
            i++;
        }
        j++;
    }
}

int main(int argc, char **argv) {
    if (argc < 2)
        exit(0);
    int nbs[argc - 1];
    int i = 0;

    while (i < argc - 1) {
        nbs[i] = atoi(argv[i + 1]);
        i++;
    }
    sort_nbs(nbs, argc);
    print_nbs(nbs, argc);
    return 0;
}
