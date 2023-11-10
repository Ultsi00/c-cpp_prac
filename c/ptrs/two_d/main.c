#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/*
    different ways to access indeces of char**
*/
int main(int argc, char **argv) {
    char str[5][8] = {"0123456", "abcdefg", "ABCDEFG", "opqrstu", "OPQRSTU"};

//allocated in the array:

    printf("%s\n", *str);
    //>> 0123456    [0][0 -> n]

    printf("%c\n", **str);
    //>> 0          [0][0]

    printf("%c\n", *((*str) + 1));
    //>> 1          [0][1]

    printf("%c\n", *(*(str + 2) + 2));
    //>> C          [2][2]

    printf("%s\n", *(str + 1));
    //>> abcdefg    [1][0 -> ]

    printf("%c\n", **(str + 1));
    //>> a          [1][0]

    printf("%s\n", (*str + 1));
    //>> 123456     [0][1 -> n]

    printf("%s\n", *(str + 3) + 4);
    //>>stu        [3][4 -> n]

    printf("%c\n", *str[2] + 2);
    //>>C           [2][2]

//not allocated in the array:
    // printf("%s\n", *(str + 1 + 6) );
    //>> str[7] 
    // printf("%c\n", **str[1][3] );
    //>> str[0][0][1][3]

    return 0;
}
