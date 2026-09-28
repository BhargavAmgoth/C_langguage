/*
 * Implement our own strcpy() and strncpy().
 * Like the library versions, they return the destination pointer.
 */
#include <stdio.h>

char *my_strcpy(char *dest, const char *src)
{
    char *start = dest;

    while ((*dest++ = *src++) != '\0')
        ;
    return start;
}

/* copies at most n chars; pads with '\0' if src is shorter (same as strncpy) */
char *my_strncpy(char *dest, const char *src, unsigned long n)
{
    unsigned long i;

    for (i = 0; i < n && src[i] != '\0'; i++)
        dest[i] = src[i];
    for (; i < n; i++)
        dest[i] = '\0';
    return dest;
}

int main(void)
{
    char src[100] = "Hello AMD";
    char dest1[100];
    char dest2[100];

    my_strcpy(dest1, src);
    my_strncpy(dest2, src, 5);
    dest2[5] = '\0';            /* strncpy does not terminate if n <= strlen(src) */

    printf("Source            : %s\n", src);
    printf("my_strcpy result  : %s\n", dest1);
    printf("my_strncpy(5)     : %s\n", dest2);
    return 0;
}
