/*
 * Find the maximum occurring character in a string.
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "advanced micro devices";
    int freq[256] = { 0 };
    int i;
    int max_count = 0;
    char max_char = '\0';

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] != ' ')
            freq[(unsigned char)str[i]]++;

    /* scan the string (not the table) so ties go to the first occurring char */
    for (i = 0; str[i] != '\0'; i++) {
        if (freq[(unsigned char)str[i]] > max_count) {
            max_count = freq[(unsigned char)str[i]];
            max_char = str[i];
        }
    }

    printf("String                : %s\n", str);
    printf("Max occurring char    : '%c' (%d times)\n", max_char, max_count);
    return 0;
}
