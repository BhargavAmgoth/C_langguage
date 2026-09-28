/*
 * Palindrome check using recursion.
 */
#include <stdio.h>

int is_palindrome_rec(const char *s, int start, int end)
{
    if (start >= end)           /* crossed or met in the middle */
        return 1;
    if (s[start] != s[end])
        return 0;
    return is_palindrome_rec(s, start + 1, end - 1);
}

int main(void)
{
    char str[100] = "racecar";
    int len = 0;

    while (str[len] != '\0')
        len++;

    if (is_palindrome_rec(str, 0, len - 1))
        printf("\"%s\" is a palindrome\n", str);
    else
        printf("\"%s\" is not a palindrome\n", str);
    return 0;
}
