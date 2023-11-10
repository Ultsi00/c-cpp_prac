#include <stdio.h>

/*
    sum of 2 highest integers
*/
int sum_ints(const int nbs[], int size) {
    if (size <= 1)
        return nbs[0];

    int top = nbs[0];
    int dawg = nbs[0];

    while(size > 0) {
        if (top < *nbs) {
            if (dawg != top)
                dawg = top;
            top = *nbs;
        }
        nbs++;
        size--;
    }
    return (top + dawg);
}

int main() {
    int res = 0;
    int size = 0;
    int nbs[] = {0, 2, 5, 9, 3};

    size = (sizeof(nbs) / sizeof(int));
    res = sum_ints(nbs, size);
    printf("%d\n", res);
    return 0;
}