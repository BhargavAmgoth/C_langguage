/*
 * Reverse a string using a while loop (in-place).
 * Time: O(n)   Space: O(1)
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "Hello AMD";
    int start = 0;
    int end = 0;
    char temp;

    while (str[end] != '\0')
        end++;
    end--;                      /* last valid character */

    printf("Original string : %s\n", str);

    while (start < end) {
        temp       = str[start];
        str[start] = str[end];
        str[end]   = temp;
        start++;
        end--;
    }

    printf("Reversed string : %s\n", str);
    return 0;
}
