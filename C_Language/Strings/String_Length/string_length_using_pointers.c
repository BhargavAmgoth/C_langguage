/*
 * Find the length of a string using pointer arithmetic.
 * Length = (address of '\0') - (address of first char)
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "Hello AMD";
    char *p = str;

    while (*p != '\0')
        p++;

    printf("String : %s\n", str);
    printf("Length : %d\n", (int)(p - str));
    return 0;
}
