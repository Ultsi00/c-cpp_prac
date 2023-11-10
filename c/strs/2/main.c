#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static void conv_sel_lc(char *str, char c) {
    int i = 0;

    while (str[i] != '\0') {
        if ( str[i] < 97 || str[i] > 122 ) {
            i++;
            continue;
        }
        if ( (str[i] >= 97 && str[i] <= 122) && str[i] != c ) {
            i++;
            continue;
        }
        if ( (str[i] >= 97 && str[i] <= 122) && str[i] == c )
            str[i] = str[i] - 32;
        else {
            printf("Error.\n");
            exit(0);
        }
        i++;
    }
}

static void *cpy_str(char *input, char *str) {
    int len = 0;
    int i = 0;

    for (int j = 0; input[j] != '\0'; j++)
        len++;
    if (!(str = (char *) malloc(sizeof(char) * (len + 1))))
        exit(0);
    while (input[i] != '\0') {
        str[i] = input[i];
        i++;
    }
    str[len] = '\0';
    return str;
}

/*
input:  argc = 3
        argv[1]: string
        argv[2]: char
convert selected lowercase char (= argv[2]) found in the string (= argv[2]) to uppercase.
create a new string, with the converted values.
print the new string.
*/
int main(int argc, char **argv) {
    if (argc != 3)
        exit(0);
    char *str;
    str = cpy_str(argv[1], str);
    conv_sel_lc(str, argv[2][0]);
    printf("before conv:\t%s\nafter conv:\t%s\n", argv[1], str);
    free(str);
    str = NULL;
    return 0;
}