/*
 * Copy one string to another without strcpy(), using a loop.
 */
#include <stdio.h>

int main(void)
{
    char src[100] = "Hello AMD";
    char dest[100];
    int i;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';             /* don't forget the terminator */

    printf("Source      : %s\n", src);
    printf("Destination : %s\n", dest);
    return 0;
}
