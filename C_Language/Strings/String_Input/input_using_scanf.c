/*
 * Basic word input: scanf("%99s")
 *
 * - Reads only ONE word: stops at the first space, tab or newline.
 * - No '&' needed: the array name is already an address.
 * - A width of 99 protects this 100-byte array from overflow.
 *
 * Input : Hello AMD
 * Output: Hello
 */
#include <stdio.h>

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    if (scanf("%99s", str) != 1) {
        puts("No word was read.");
        return 1;
    }

    printf("You entered: %s\n", str);
    return 0;
}
