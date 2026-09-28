/*
 * Reverse a string by copying characters into a second array.
 * Time: O(n)   Space: O(n)
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "Hello AMD";
    char rev[100];
    int len = 0;
    int i;

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len; i++)
        rev[i] = str[len - 1 - i];
    rev[len] = '\0';

    printf("Original string : %s\n", str);
    printf("Reversed string : %s\n", rev);
    return 0;
}
