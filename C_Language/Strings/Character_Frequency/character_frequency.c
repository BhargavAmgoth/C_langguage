/*
 * Find the frequency of every character in a string.
 * Uses a 256-entry count array (one slot per ASCII value).
 * Time: O(n)   Space: O(1) (fixed 256)
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "advanced micro devices";
    int freq[256] = { 0 };
    int i;

    for (i = 0; str[i] != '\0'; i++)
        freq[(unsigned char)str[i]]++;

    printf("String : %s\n", str);
    printf("Char  Count\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] > 0 && i != ' ')
            printf(" %c    %d\n", i, freq[i]);
    }
    return 0;
}
