/*
 * Reverse a string without a temp variable, using XOR swap.
 * Popular interview follow-up: "Can you do it without an extra variable?"
 * Note: XOR swap must never be applied to the same memory location
 *       (i == j), which is why the loop condition is i < j.
 */
#include <stdio.h>

int main(void)
{
    char str[100] = "Hello AMD";
    int len = 0;
    int i, j;

    while (str[len] != '\0')
        len++;

    printf("Original string : %s\n", str);

    for (i = 0, j = len - 1; i < j; i++, j--) {
        str[i] ^= str[j];
        str[j] ^= str[i];
        str[i] ^= str[j];
    }

    printf("Reversed string : %s\n", str);
    return 0;
}
