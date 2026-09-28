/*
 * Compare two strings using recursion (no loop).
 */
#include <stdio.h>

int compare_recursive(const char *s1, const char *s2)
{
    if (*s1 != *s2 || *s1 == '\0')
        return (unsigned char)*s1 - (unsigned char)*s2;
    return compare_recursive(s1 + 1, s2 + 1);
}

int main(void)
{
    char str1[100] = "Radeon";
    char str2[100] = "Radeon";
    char str3[100] = "Ryzen";

    printf("compare(\"%s\", \"%s\") = %d\n", str1, str2, compare_recursive(str1, str2));
    printf("compare(\"%s\", \"%s\") = %d\n", str1, str3, compare_recursive(str1, str3));
    return 0;
}
