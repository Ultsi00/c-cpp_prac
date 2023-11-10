#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

static int count_str_val(char *str) {
    int val = 0;

    while (*str != '\0') {
        val = val + *str;
        str++;
    }
    return val;
}

static void is_str_anagram(char *str1, char *str2, int len1, int len2) {
    if (len1 != len2) {
        printf("Strings ARE NOT anagrams.\n");
        exit(0);
    }
    if (count_str_val(str1) != count_str_val(str2)) {
        printf("Strings ARE NOT anagrams.\n");
        exit(0);
    }
    else
        printf("String ARE anagrams.\n");
}

/*
input: 2 strings (char*)
check if strings are anagrams.
*/
int main(int argc, char **argv) {
    if (argc != 3)
        exit(0);
    
    int len1 = 0, len2 = 0;
    for (int i = 0; argv[1][i] != '\0'; i++)
        len1++;
    for (int i = 0; argv[2][i] != '\0'; i++)
        len2++;
    is_str_anagram(argv[1], argv[2], len1, len2);
    return 0;
}