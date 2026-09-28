/*
 * Way 7: gets() - DO NOT USE. This file demonstrates its safe replacement.
 *
 *     char str[10];
 *     gets(str);          // reads a whole line, but has NO size limit
 *
 * - gets() cannot know the size of the array, so typing more than 9
 *   characters writes past the end of str (buffer overflow).
 * - Overflows like this were used in real attacks (e.g. the Morris worm).
 * - It was deprecated in C99 and REMOVED from the language in C11,
 *   so modern compilers refuse it or warn about it.
 *
 * This program uses fgets() instead; it does NOT call gets().
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[10];

    printf("gets() is unsafe and removed from modern C.\n");
    printf("Enter a sentence (maximum 9 characters): ");
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;
    str[strcspn(str, "\r\n")] = '\0';

    printf("You entered: %s\n", str);
    return 0;
}
