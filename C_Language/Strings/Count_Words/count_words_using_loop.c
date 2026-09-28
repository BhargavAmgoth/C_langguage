/*
 * Count the number of words in a string.
 * Handles multiple spaces, leading and trailing spaces, and tabs.
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "   AMD   makes  CPUs and   GPUs  ";
    int words = 0;
    int in_word = 0;
    int i;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;        /* start of a new word */
            words++;
        }
    }

    printf("String : \"%s\"\n", str);
    printf("Words  : %d\n", words);
    return 0;
}
