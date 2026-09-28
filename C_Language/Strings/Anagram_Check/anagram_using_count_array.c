/*
 * Check whether two strings are anagrams using a count array.
 * "listen" and "silent" are anagrams.
 * Increment for str1, decrement for str2; all counts must end at 0.
 * Time: O(n)   Space: O(1)
 */
#include <stdio.h>

int is_anagram(const char *s1, const char *s2)
{
    int count[256] = { 0 };
    int i;

    for (i = 0; s1[i] && s2[i]; i++) {
        count[(unsigned char)s1[i]]++;
        count[(unsigned char)s2[i]]--;
    }
    if (s1[i] || s2[i])         /* different lengths */
        return 0;

    for (i = 0; i < 256; i++)
        if (count[i] != 0)
            return 0;
    return 1;
}

int main(void)
{
    printf("listen / silent : %s\n", is_anagram("listen", "silent") ? "Anagram" : "Not anagram");
    printf("triangle / integral : %s\n", is_anagram("triangle", "integral") ? "Anagram" : "Not anagram");
    printf("AMD / MAD1 : %s\n", is_anagram("AMD", "MAD1") ? "Anagram" : "Not anagram");
    return 0;
}
