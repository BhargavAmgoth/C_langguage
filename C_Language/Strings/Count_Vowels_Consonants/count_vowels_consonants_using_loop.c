/*
 * Count vowels, consonants, digits, spaces and special characters.
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "AMD Ryzen 9 7950X!";
    int vowels = 0, consonants = 0, digits = 0, spaces = 0, special = 0;
    int i;
    char c;

    for (i = 0; str[i] != '\0'; i++) {
        c = str[i];
        if (c >= 'A' && c <= 'Z')
            c = (char)(c + 32);     /* convert to lowercase */

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            vowels++;
        else if (c >= 'a' && c <= 'z')
            consonants++;
        else if (c >= '0' && c <= '9')
            digits++;
        else if (c == ' ')
            spaces++;
        else
            special++;
    }

    printf("String     : %s\n", str);
    printf("Vowels     : %d\n", vowels);
    printf("Consonants : %d\n", consonants);
    printf("Digits     : %d\n", digits);
    printf("Spaces     : %d\n", spaces);
    printf("Special    : %d\n", special);
    return 0;
}
