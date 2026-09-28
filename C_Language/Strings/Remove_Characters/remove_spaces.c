/*
 * Remove all spaces from a string (in-place).
 * Read index i walks the whole string, write index j keeps only non-spaces.
 * Time: O(n)   Space: O(1)
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "  A M D   Ryzen  ";
    int i, j = 0;

    printf("Original : \"%s\"\n", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ')
            str[j++] = str[i];
    }
    str[j] = '\0';

    printf("Result   : \"%s\"\n", str);
    return 0;
}
