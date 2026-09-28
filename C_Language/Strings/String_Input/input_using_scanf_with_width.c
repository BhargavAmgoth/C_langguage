/*
 * Way 2: scanf("%99s") - scanf with a maximum field width
 *
 * - Same as %s (one word only), but reads at most 99 characters,
 *   leaving room for '\0' in a 100-byte array.
 * - This is the SAFE way to use scanf for strings (no buffer overflow).
 */
#include <stdio.h>

int main(void)
{
    char str[10];

    printf("Enter a word (max 9 chars): ");
    if (scanf("%9s", str) != 1) { /* width = sizeof(str) - 1 */
        puts("No word was read.");
        return 1;
    }

    printf("You entered: %s\n", str);
    return 0;
}
