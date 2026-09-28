/*
 * Way 6: getc() / fgetc() - read one character at a time from a stream
 *
 * - getchar()      is the same as getc(stdin)
 * - getc(stream)   may be a macro (faster)
 * - fgetc(stream)  is always a real function
 * - Both work with any FILE*, not just stdin.
 */
#include <stdio.h>

int main(void)
{
    char str[100];
    int ch;
    int i = 0;
    int truncated = 0;

    printf("Enter a sentence: ");

    while ((ch = getc(stdin)) != EOF && ch != '\n') {
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
