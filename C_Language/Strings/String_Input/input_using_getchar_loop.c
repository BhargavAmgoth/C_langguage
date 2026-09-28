/*
 * Way 5: getchar() in a loop - read one character at a time
 *
 * - Full control: you decide when to stop and what to store.
 * - getchar() returns int (not char) so it can return EOF.
 * - You must add the '\0' yourself.
 */
#include <stdio.h>

int main(void)
{
    char str[100];
    int ch;
    int i = 0;
    int truncated = 0;

    printf("Enter a sentence: ");

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch != '\r') {
            if (i < (int)sizeof(str) - 1)
                str[i++] = (char)ch;
            else
                truncated = 1;
        }
    }
    str[i] = '\0';

    if (truncated)
        puts("Input was too long; extra characters were discarded.");

    printf("You entered: %s\n", str);
    return 0;
}
