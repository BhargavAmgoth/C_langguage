/*
 * Count words using recursion.
 * A word starts where the current char is not a space and
 * the previous char was a space (or we are at the start).
 */
#include <stdio.h>

int count_words(const char *s, int prev_space)
{
    int starts_word;

    if (*s == '\0')
        return 0;

    starts_word = (*s != ' ' && prev_space);
    return starts_word + count_words(s + 1, *s == ' ');
}

int main(void)
{
    char str[100] = "   AMD   makes  CPUs and   GPUs  ";

    printf("String : \"%s\"\n", str);
    printf("Words  : %d\n", count_words(str, 1));
    return 0;
}
