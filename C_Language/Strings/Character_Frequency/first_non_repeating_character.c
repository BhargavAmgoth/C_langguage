/*
 * Find the first non-repeating character in a string.
 * Two passes: count, then find the first char with count == 1.
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "swiss";
    int freq[256] = { 0 };
    int i;

    for (i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character in \"%s\" is '%c' (index %d)\n",
                   str, str[i], i);
            return 0;
        }
    }

    printf("No non-repeating character in \"%s\"\n", str);
    return 0;
}
