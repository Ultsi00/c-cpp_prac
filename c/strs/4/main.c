#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

//If program were bigger:
//  should convert argv table to a table (rm argv0):
//      table[0] = argv[1], table[1] = argv[2], ...
//  since values in int* len_of_strs are at index 0, 1, 2, ...
//----------------------------------------------------------------

void    set_strs_len(int argc, char **argv, int *len_of_strs);
char    *malloc_new_str(char *str, int size);

/*
    concatenates pre-selected content to a new str.
    **table is argv (2d).
    range_i refers to *len_of_strs indeces (len of each table[i + 1][])
    [   -- no argv to table conversion at the start of program. --  ]
*/
static char *conc( char* con, char **table, int range_i_min,
    int range_i_max, int *len_of_strs )
{
    int i = range_i_min;
    int j = range_i_max;
    int a = 0, k = 0;

    while (i <= j) {
        a = 0;
        while (a < len_of_strs[i]) {
            con[k] = table[i + 1][a];
            k++;
            a++;
        }
        i++;
    }
    con[k] = '\0';
    return con;
}

/*
    full range of indexes:
        range_i_min == -1, range_i_max == -1 
*/
char *conc_main(char **table, int *len_of_strs, unsigned int range_i_min,
    unsigned int range_i_max, int argc, char *con) 
{
    //adjust argc vs los[i]. argc -> (-1) argv[i] -> (-1) los[i])
    if (range_i_min < 0 || range_i_min > (argc - 2))
        range_i_min = 0;
    if (range_i_max < 0 || range_i_max > (argc - 2))
        range_i_max = (argc - 2);
    
    int len_conc = 0;
    int i = range_i_min;
    int j = range_i_max;
    while (i <= j) {
        len_conc = len_conc + len_of_strs[i];
        i++;
    }
    malloc_new_str(con, len_conc);
    con = conc(con, table, range_i_min, range_i_max, len_of_strs);

    return con;
}

/*
    input: argvs
    reads argvs, inserts each length of argv into int array.
    range of indeces are set directly to main, without input().
    concatenates argv contents in the given range.
    prints concatenated str.
*/
int main(int argc, char **argv) {
    if (argc < 3)
        exit(0);

    int len_of_strs[argc];
    set_strs_len(argc, argv, len_of_strs);

    char *str_new;
    str_new = conc_main(argv, len_of_strs, -1, -1, argc, str_new);
    printf("%s\n", str_new);
    return 0;
}
