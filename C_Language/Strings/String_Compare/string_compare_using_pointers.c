/*
 * Compare two strings using pointers.
 */
#include <stdio.h>

int main(void)
{
    char str1[100] = "Hello";
    char str2[100] = "Hello";
    const char *p = str1;
    const char *q = str2;

    while (*p && (*p == *q)) {
        p++;
        q++;
    }

    if (*p == *q)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal (difference = %d)\n",
               (unsigned char)*p - (unsigned char)*q);
    return 0;
}
