/*
 * Concatenate two strings using pointers.
 */
#include <stdio.h>

int main(void)
{
    char str1[100] = "Hello ";
    char str2[50] = "AMD";
    char *d = str1;
    char *s = str2;

    while (*d)                  /* move to '\0' of str1 */
        d++;

    while ((*d++ = *s++) != '\0')
        ;

    printf("Concatenated string : %s\n", str1);
    return 0;
}
