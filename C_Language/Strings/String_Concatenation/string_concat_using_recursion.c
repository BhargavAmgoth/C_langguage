/*
 * Concatenate two strings using recursion (no loop).
 */
#include <stdio.h>

void concat_recursive(char *dest, const char *src)
{
    if (*dest != '\0') {        /* first reach the end of dest */
        concat_recursive(dest + 1, src);
        return;
    }

    *dest = *src;               /* then copy src one char at a time */
    if (*src == '\0')
        return;
    *(dest + 1) = '\0';         /* keep dest terminated for next call */
    concat_recursive(dest + 1, src + 1);
}

int main(void)
{
    char str1[100] = "Hello ";
    char str2[50] = "AMD";

    concat_recursive(str1, str2);

    printf("Concatenated string : %s\n", str1);
    return 0;
}
