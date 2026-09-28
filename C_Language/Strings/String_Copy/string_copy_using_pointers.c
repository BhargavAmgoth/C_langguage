/*
 * Copy a string using pointers - the classic one-liner:
 *     while ((*d++ = *s++) != '\0');
 * The '\0' is copied as part of the loop.
 */
#include <stdio.h>

int main(void)
{
    char src[100] = "Hello AMD";
    char dest[100];
    char *s = src;
    char *d = dest;

    while ((*d++ = *s++) != '\0')
        ;

    printf("Source      : %s\n", src);
    printf("Destination : %s\n", dest);
    return 0;
}
