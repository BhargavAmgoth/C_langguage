/*
 * Copy a string using recursion (no loop).
 */
#include <stdio.h>

void copy_recursive(char *dest, const char *src)
{
    *dest = *src;
    if (*src == '\0')           /* base case: terminator copied */
        return;
    copy_recursive(dest + 1, src + 1);
}

int main(void)
{
    char src[100] = "Hello AMD";
    char dest[100];

    copy_recursive(dest, src);

    printf("Source      : %s\n", src);
    printf("Destination : %s\n", dest);
    return 0;
}
