/*
 * Reverse a string in-place using a recursive function.
 * Swap first and last, then recurse on the inner part.
 * Time: O(n)   Space: O(n) (recursion stack)
 */
#include <stdio.h>

void reverse_recursive(char *s, int start, int end)
{
    char temp;

    if (start >= end)           /* base case */
        return;

    temp     = s[start];
    s[start] = s[end];
    s[end]   = temp;

    reverse_recursive(s, start + 1, end - 1);
}

int main(void)
{
    char str[100] = "Hello AMD";
    int len = 0;

    while (str[len] != '\0')
        len++;

    printf("Original string : %s\n", str);
    reverse_recursive(str, 0, len - 1);
    printf("Reversed string : %s\n", str);
    return 0;
}
