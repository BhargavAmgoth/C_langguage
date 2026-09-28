/*
 * Case conversion using bitwise operators (favourite embedded question).
 *
 * In ASCII, upper and lower case letters differ only in bit 5 (0x20):
 *   'A' = 0100 0001     'a' = 0110 0001
 *
 *   to lower : c | 0x20
 *   to upper : c & ~0x20   (same as c & 0xDF)
 *   toggle   : c ^ 0x20
 */
#include <stdio.h>

static int is_letter(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main(void)
{
    char upper[100] = "Hello AMD Ryzen";
    char lower[100] = "Hello AMD Ryzen";
    char toggle[100] = "Hello AMD Ryzen";
    int i;

    for (i = 0; upper[i]; i++) {
        if (is_letter(upper[i])) {
            upper[i]  = (char)(upper[i] & ~0x20);
            lower[i]  = (char)(lower[i] | 0x20);
            toggle[i] = (char)(toggle[i] ^ 0x20);
        }
    }

    printf("Uppercase : %s\n", upper);
    printf("Lowercase : %s\n", lower);
    printf("Toggled   : %s\n", toggle);
    return 0;
}
