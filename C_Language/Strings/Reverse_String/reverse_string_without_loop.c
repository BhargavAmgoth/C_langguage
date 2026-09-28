/*
 * Reverse a string WITHOUT using any loop (no for / while / do-while).
 * Recursion is used both to find the length and to do the reversal.
 *
 * Method 1: print the string in reverse (string is not modified).
 * Method 2: actually reverse the string in memory.
 */
#include <stdio.h>

/* Method 1: go to the end first, print while returning */
void print_reverse(const char *s)
{
    if (*s == '\0')
        return;
    print_reverse(s + 1);
    putchar(*s);
}

/* length without a loop */
int length(const char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + length(s + 1);
}

/* Method 2: in-place reverse without a loop */
void reverse(char *s, int i, int j)
{
    char temp;

    if (i >= j)
        return;
    temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    reverse(s, i + 1, j - 1);
}

int main(void)
{
    char str[100] = "Hello AMD";

    printf("Original string          : %s\n", str);

    printf("Printed in reverse       : ");
    print_reverse(str);
    printf("\n");

    reverse(str, 0, length(str) - 1);
    printf("Reversed string (memory) : %s\n", str);
    return 0;
}
