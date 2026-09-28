/*
 * Reverse a string using a for loop (in-place, two-index swap).
 * Time: O(n)   Space: O(1)
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "Hello AMD";
    int len = 0;
    int i, j;
    char temp;

    /* find length without strlen */
    while (str[len] != '\0')
        len++;

    printf("Original string : %s\n", str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp   = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string : %s\n", str);
    return 0;
}
