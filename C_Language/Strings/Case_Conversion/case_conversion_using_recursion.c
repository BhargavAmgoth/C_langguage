/*
 * Convert a string to uppercase using recursion.
 */
#include <stdio.h>

void to_upper_rec(char *s)
{
    if (*s == '\0')
        return;
    if (*s >= 'a' && *s <= 'z')
        *s = (char)(*s - 32);
    to_upper_rec(s + 1);
}

int main(void)
{
    char str[100] = "hello amd";

    printf("Original  : %s\n", str);
    to_upper_rec(str);
    printf("Uppercase : %s\n", str);
    return 0;
}
