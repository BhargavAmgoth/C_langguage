/*
 * Palindrome check that ignores case, spaces and punctuation.
 * Example: "A man, a plan, a canal: Panama" -> palindrome
 */
#include <stdio.h>

static int is_alnum(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
}

static char to_lower(char c)
{
    return (c >= 'A' && c <= 'Z') ? (char)(c + 32) : c;
}

int is_palindrome(const char *s)
{
    int i = 0;
    int j = 0;

    while (s[j])
        j++;
    j--;

    while (i < j) {
        if (!is_alnum(s[i])) {
            i++;
        } else if (!is_alnum(s[j])) {
            j--;
        } else {
            if (to_lower(s[i]) != to_lower(s[j]))
                return 0;
            i++;
            j--;
        }
    }
    return 1;
}

int main(void)
{
    char str[100] = "A man, a plan, a canal: Panama";

    printf("\"%s\" -> %s\n", str, is_palindrome(str) ? "Palindrome" : "Not palindrome");
    return 0;
}
