/*
 * Find the length of a string without strlen(), using a loop.
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "Hello AMD";
    int len = 0;

    while (str[len] != '\0')
        len++;

    printf("String : %s\n", str);
    printf("Length : %d\n", len);
    return 0;
}
