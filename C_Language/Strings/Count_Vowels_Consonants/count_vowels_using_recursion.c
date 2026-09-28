/*
 * Count vowels in a string using recursion.
 */
#include <stdio.h>

int is_vowel(char c)
{
    if (c >= 'A' && c <= 'Z')
        c = (char)(c + 32);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int count_vowels(const char *s)
{
    if (*s == '\0')
        return 0;
    return is_vowel(*s) + count_vowels(s + 1);
}

int main(void)
{
    char str[100] = "Advanced Micro Devices";

    printf("String : %s\n", str);
    printf("Vowels : %d\n", count_vowels(str));
    return 0;
}
