/*
 * Find the first repeating character (the first char seen a second time).
 * Single pass using a "seen" table.
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "abcdbea";
    int seen[256] = { 0 };
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (seen[(unsigned char)str[i]]) {
            printf("First repeating character in \"%s\" is '%c'\n", str, str[i]);
            return 0;
        }
        seen[(unsigned char)str[i]] = 1;
    }

    printf("No repeating character in \"%s\"\n", str);
    return 0;
}
