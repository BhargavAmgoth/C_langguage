/*
 * Check whether a string is a palindrome using two pointers.
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "madam";
    char *left = str;
    char *right = str;

    while (*right)
        right++;
    right--;

    while (left < right && *left == *right) {
        left++;
        right--;
    }

    if (left >= right)
        printf("\"%s\" is a palindrome\n", str);
    else
        printf("\"%s\" is not a palindrome\n", str);
    return 0;
}
