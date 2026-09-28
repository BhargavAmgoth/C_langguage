/*
 * Count how many times a substring occurs in a string
 * (overlapping occurrences are counted, e.g. "aa" in "aaaa" = 3).
 */
#include <stdio.h>

int count_occurrences(const char *str, const char *sub)
{
    int count = 0;
    int i, j;

    for (i = 0; str[i] != '\0'; i++) {
        for (j = 0; sub[j] != '\0' && str[i + j] == sub[j]; j++)
            ;
        if (sub[j] == '\0' && j > 0)
            count++;
    }
    return count;
}

int main(void)
{
    printf("\"AMD\" in \"AMD Ryzen and AMD Radeon\" : %d\n",
           count_occurrences("AMD Ryzen and AMD Radeon", "AMD"));
    printf("\"aa\" in \"aaaa\" : %d\n", count_occurrences("aaaa", "aa"));
    return 0;
}
