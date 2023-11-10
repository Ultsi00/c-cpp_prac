#include <stdbool.h>
#include <stdio.h>

/*
    on: 2 active sources (0 + 2, 0 + 1a&1b)
    off: !2 active sources

    [source 0] ---------------- |
                                |
    [source 1a] --- |           |
                    | --OR-----AND--- [on / off]
    [source 1b] --- |   |
                        |
    [source 2] ----------
*/
static int dev_stat(bool s0, bool s1a, bool s1b, bool s2) {
    if (s0 = false)
        return 0;
    if ((s1a == true && s1b == true) && s2 == false)
        return 1;
    else if ((s1a == false || s1b == false) && s2 == true)
        return 1;
    else
        return 0;
}

int main () {
    bool    s0 = true;
    bool    s1a = false;
    bool    s1b = true;
    bool    s2 = false;    

    printf("status: %s\n", (dev_stat(s0, s1a, s1b, s2) == 1 ? "ON" : "OFF"));
    return 0;
}
