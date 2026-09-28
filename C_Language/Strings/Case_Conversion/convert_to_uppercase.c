/*
 * Convert a string to uppercase without toupper().
 * 'a' (97) - 'A' (65) = 32
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "hello amd 2026";
    int i;

    printf("Original  : %s\n", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (char)(str[i] - 32);
    }

    printf("Uppercase : %s\n", str);
    return 0;
}
