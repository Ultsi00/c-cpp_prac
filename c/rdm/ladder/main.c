#include <stdio.h>

static int find_smallest_nb(int *ladder, int size) {
    int i = 0, min = ladder[0];

    if (size == 1)
        return ladder[0];
    while (i < size - 1) {
        if (min > ladder[i + 1])
            min = ladder[i + 1];
        i++;
    }
    return min;
}

int usage_count(int ladder[], int size) 
{
    int ladder_min = 0;
    int both_feet_count = 0;

    ladder_min = find_smallest_nb(ladder, size);
    if (ladder_min <= 1)
        return 0;
    while (ladder_min >= 1) {
        ladder_min = ladder_min - 2;
        both_feet_count++;
    }
    return both_feet_count;
}

/*
    ladders. If value in int* is 2, can only pass through the ladder
        once, since by game rules "1 pass costs the int* to lose 2).
        Int* does not have to modified, can if choose so.
*/
int main()
{
    int ladder[] = { 2, 2 };
    int length = sizeof(ladder)/sizeof(int);
    printf("%d\n", usage_count(ladder, length));
}
