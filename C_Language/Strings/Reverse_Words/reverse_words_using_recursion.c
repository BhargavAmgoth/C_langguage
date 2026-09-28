/*
 * Print the words of a sentence in reverse order using recursion.
 * Each call skips one word, recurses, then prints that word on return.
 */
#include <stdio.h>

void print_words_reversed(const char *s)
{
    const char *word;
    int len = 0;

    while (*s == ' ')           /* skip leading spaces */
        s++;
    if (*s == '\0')
        return;

    word = s;
    while (s[0] != ' ' && s[0] != '\0') {
        s++;
        len++;
    }

    print_words_reversed(s);    /* print the later words first */
    printf("%.*s ", len, word);
}

int main(void)
{
    char str[100] = "I love AMD processors";

    printf("Original : %s\n", str);
    printf("Reversed : ");
    print_words_reversed(str);
    printf("\n");
    return 0;
}
