/*
 * Implement our own strcmp(), strncmp() and a case-insensitive compare.
 */
#include <stdio.h>

int my_strcmp(const char *s1, const char *s2)
{
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int my_strncmp(const char *s1, const char *s2, unsigned long n)
{
    while (n && *s1 && (*s1 == *s2)) {
        s1++;
        s2++;
        n--;
    }
    if (n == 0)
        return 0;
    return (unsigned char)*s1 - (unsigned char)*s2;
}

static char to_lower(char c)
{
    return (c >= 'A' && c <= 'Z') ? (char)(c + 32) : c;
}

int my_strcasecmp(const char *s1, const char *s2)
{
    while (*s1 && to_lower(*s1) == to_lower(*s2)) {
        s1++;
        s2++;
    }
    return (unsigned char)to_lower(*s1) - (unsigned char)to_lower(*s2);
}

int main(void)
{
    printf("my_strcmp(\"AMD\", \"AMD\")          = %d\n", my_strcmp("AMD", "AMD"));
    printf("my_strcmp(\"AMD\", \"Intel\")        = %d\n", my_strcmp("AMD", "Intel"));
    printf("my_strncmp(\"Ryzen5\", \"Ryzen7\", 5) = %d\n", my_strncmp("Ryzen5", "Ryzen7", 5));
    printf("my_strcasecmp(\"amd\", \"AMD\")      = %d\n", my_strcasecmp("amd", "AMD"));
    return 0;
}
