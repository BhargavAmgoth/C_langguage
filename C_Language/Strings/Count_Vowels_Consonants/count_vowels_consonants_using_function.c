/*
 * Count vowels and consonants using functions.
 * Results are returned through pointer arguments.
 */
#include <stdio.h>

int is_vowel(char c)
{
    if (c >= 'A' && c <= 'Z')
        c = (char)(c + 32);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int is_letter(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

void count_letters(const char *s, int *vowels, int *consonants)
{
    *vowels = 0;
    *consonants = 0;

    for (; *s; s++) {
        if (is_letter(*s)) {
            if (is_vowel(*s))
                (*vowels)++;
            else
                (*consonants)++;
        }
    }
}

int main(void)
{
    char str[100] = "Advanced Micro Devices";
    int v, c;

    count_letters(str, &v, &c);

    printf("String     : %s\n", str);
    printf("Vowels     : %d\n", v);
    printf("Consonants : %d\n", c);
    return 0;
}
