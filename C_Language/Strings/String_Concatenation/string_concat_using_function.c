/*
 * Implement our own strcat() and strncat().
 */
#include <stdio.h>

char *my_strcat(char *dest, const char *src)
{
    char *start = dest;

    while (*dest)
        dest++;
    while ((*dest++ = *src++) != '\0')
        ;
    return start;
}

/* appends at most n chars and always adds '\0' (same as strncat) */
char *my_strncat(char *dest, const char *src, unsigned long n)
{
    char *start = dest;

    while (*dest)
        dest++;
    while (n-- && *src)
        *dest++ = *src++;
    *dest = '\0';
    return start;
}

int main(void)
{
    char str1[100] = "Hello ";
    char str2[100] = "Hello ";

    my_strcat(str1, "AMD");
    my_strncat(str2, "AMD Ryzen", 3);

    printf("my_strcat  : %s\n", str1);
    printf("my_strncat : %s\n", str2);
    return 0;
}
