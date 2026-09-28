/*
 * Palindrome check using a function.
 */
#include <stdio.h>

int is_palindrome(const char *s)
{
    int i = 0;
    int j = 0;

    while (s[j] != '\0')
        j++;
    j--;

    while (i < j) {
        if (s[i] != s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}

int main(void)
{
    const char *words[] = { "level", "AMD", "noon", "a", "" };
    int n = sizeof(words) / sizeof(words[0]);
    int k;

    for (k = 0; k < n; k++)
        printf("\"%s\" -> %s\n", words[k],
               is_palindrome(words[k]) ? "Palindrome" : "Not palindrome");
    return 0;
}
