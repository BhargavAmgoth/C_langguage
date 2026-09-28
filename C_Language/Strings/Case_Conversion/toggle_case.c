/*
 * Toggle the case of each letter (upper -> lower, lower -> upper).
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "Hello AMD Ryzen";
    int i;

    printf("Original : %s\n", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = (char)(str[i] - 32);
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = (char)(str[i] + 32);
    }

    printf("Toggled  : %s\n", str);
    return 0;
}
