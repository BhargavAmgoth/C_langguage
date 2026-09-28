/*
 * Way 4: fgets() - the RECOMMENDED way to read a line
 *
 * - Reads a whole line including spaces.
 * - Never overflows: reads at most sizeof(str) - 1 characters.
 * - Keeps the '\n' at the end of the string, so we usually remove it.
 * - Returns NULL on end-of-file or error.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[100];

    printf("Enter a sentence: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("No input\n");
        return 1;
    }

    if (strchr(str, '\n') == NULL) {
        int ch = getchar();
        if (ch != EOF && ch != '\n') {
            while (ch != '\n' && ch != EOF)
                ch = getchar();
            puts("Input is too long for this buffer.");
            return 1;
        }
    }
    str[strcspn(str, "\r\n")] = '\0';   /* remove trailing newline */

    printf("You entered: %s\n", str);
    printf("Length     : %zu\n", strlen(str));
    return 0;
}
