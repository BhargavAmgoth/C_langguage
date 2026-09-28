/*
 * Implement our own strlen() function.
 * Returns an unsigned long length.
 */
#include <stdio.h>

unsigned long my_strlen(const char *s)
{
    unsigned long length = 0;

    while (*s++)
        length++;
    return length;
}

int main(void)
{
    char str[100] = "Hello AMD";

    printf("String : %s\n", str);
    printf("Length : %lu\n", my_strlen(str));
    return 0;
}
