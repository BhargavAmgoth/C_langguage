/*
 * Remove duplicate characters, keeping the first occurrence.
 * "programming" -> "progamin"
 * Time: O(n)   Space: O(1) (fixed 256 table)
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "programming";
    int seen[256] = { 0 };
    int i, j = 0;

    printf("Original : %s\n", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!seen[(unsigned char)str[i]]) {
            seen[(unsigned char)str[i]] = 1;
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("Result   : %s\n", str);
    return 0;
}
