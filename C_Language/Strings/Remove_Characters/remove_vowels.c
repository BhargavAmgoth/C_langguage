/*
 * Remove all vowels from a string (in-place).
 */
#include <stdio.h>

int is_vowel(char c)
{
    c = (char)(c | 0x20);       /* to lowercase for letters */
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main(void)
{
    char str[100] = "Advanced Micro Devices";
    int i, j = 0;

    printf("Original : %s\n", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (!is_vowel(str[i]))
            str[j++] = str[i];
    }
    str[j] = '\0';

    printf("Result   : %s\n", str);
    return 0;
}
