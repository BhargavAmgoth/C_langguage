/*
 * Count vowels and consonants using a pointer.
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "Advanced Micro Devices";
    const char *p = str;
    int vowels = 0, consonants = 0;
    char c;

    while (*p) {
        c = *p | 0x20;              /* bit trick: sets lowercase for letters */
        if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z')) {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
                vowels++;
            else
                consonants++;
        }
        p++;
    }

    printf("String     : %s\n", str);
    printf("Vowels     : %d\n", vowels);
    printf("Consonants : %d\n", consonants);
    return 0;
}
