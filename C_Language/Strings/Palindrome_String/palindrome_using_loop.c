/*
 * Check whether a string is a palindrome using a loop.
 * Example: "madam", "racecar" are palindromes.
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "racecar";
    int len = 0;
    int i;
    int is_palindrome = 1;

    while (str[len] != '\0')
        len++;

    for (i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome)
        printf("\"%s\" is a palindrome\n", str);
    else
        printf("\"%s\" is not a palindrome\n", str);
    return 0;
}
