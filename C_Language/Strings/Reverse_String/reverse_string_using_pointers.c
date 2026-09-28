/*
 * Reverse a string using two pointers (in-place).
 * Time: O(n)   Space: O(1)
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "Hello AMD";
    char *start = str;
    char *end = str;
    char temp;

    printf("Original string : %s\n", str);

    while (*end != '\0')
        end++;
    end--;                      /* point to last character */

    while (start < end) {
        temp   = *start;
        *start = *end;
        *end   = temp;
        start++;
        end--;
    }

    printf("Reversed string : %s\n", str);
    return 0;
}
