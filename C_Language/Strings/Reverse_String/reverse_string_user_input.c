/*
 * Reverse a string entered by the user (reads spaces too, using fgets).
 */
#include <stdio.h>

int main(void)
{
    char str[100];
    int len = 0;
    int i, j;
    char temp;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    /* remove the trailing newline that fgets keeps ('\r' too, for Windows) */
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r')
        len++;
    str[len] = '\0';

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp   = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
