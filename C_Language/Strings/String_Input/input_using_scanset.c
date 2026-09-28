/*
 * Way 3: scanf with a scanset - %[^\n]
 *
 * - %[^\n] means "read every character that is NOT a newline",
 *   so it reads a whole line INCLUDING spaces.
 * - %99[^\n] adds a width limit to stay safe.
 * - Other scansets: %[a-z] reads only lowercase letters,
 *                   %[^,]  reads up to a comma.
 * - The newline is left in the input buffer (not stored).
 *
 * Input : Hello AMD Ryzen
 * Output: Hello AMD Ryzen
 */
#include <stdio.h>

int main(void)
{
    char str[100];

    printf("Enter a sentence: ");
    if (scanf("%99[^\n]", str) != 1) {
        puts("No line was read (it may be empty).");
        return 1;
    }

    /* Discard any remaining characters if the input exceeded the buffer. */
    {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF)
            ;
    }

    printf("You entered: %s\n", str);
    return 0;
}
