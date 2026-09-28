/*
 * Reverse the order of words in a sentence (in-place).
 * "I love AMD processors" -> "processors AMD love I"
 *
 * Trick: 1) reverse the whole string
 *        2) reverse each individual word
 * Time: O(n)   Space: O(1)
 */
#include <stdio.h>

void reverse(char *s, int i, int j)
{
    char t;

    while (i < j) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
}

int main(void)
{
    char str[100] = "I love AMD processors";
    int len = 0;
    int start = 0;
    int i;

    while (str[len])
        len++;

    printf("Original : %s\n", str);

    reverse(str, 0, len - 1);           /* step 1 */

    for (i = 0; i <= len; i++) {        /* step 2 */
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("Reversed : %s\n", str);
    return 0;
}
