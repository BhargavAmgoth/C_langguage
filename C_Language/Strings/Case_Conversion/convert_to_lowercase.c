/*
 * Convert a string to lowercase without tolower().
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "HELLO AMD 2026";
    int i;

    printf("Original  : %s\n", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = (char)(str[i] + 32);
    }

    printf("Lowercase : %s\n", str);
    return 0;
}
