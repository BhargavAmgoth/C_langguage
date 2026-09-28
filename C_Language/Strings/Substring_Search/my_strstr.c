/*
 * Implement our own strstr(): find the first occurrence of a substring.
 * Returns a pointer to the match or NULL.
 * Naive approach - Time: O(n * m)
 */
#include <stdio.h>

char *my_strstr(const char *haystack, const char *needle)
{
    const char *h;
    const char *n;

    if (*needle == '\0')
        return (char *)haystack;

    for (; *haystack; haystack++) {
        h = haystack;
        n = needle;
        while (*h && *n && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0')         /* reached end of needle -> match */
            return (char *)haystack;
    }
    return 0;
}

int main(void)
{
    char str[100] = "AMD Ryzen and AMD Radeon";
    const char *sub = "Radeon";
    char *pos = my_strstr(str, sub);

    if (pos != 0)
        printf("\"%s\" found at index %d\n", sub, (int)(pos - str));
    else
        printf("\"%s\" not found\n", sub);
    return 0;
}
