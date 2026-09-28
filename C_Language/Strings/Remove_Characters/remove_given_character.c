/*
 * Remove all occurrences of a given character from a string (in-place).
 */
#include <stdio.h>

void remove_char(char *s, char ch)
{
    char *read = s;
    char *write = s;

    while (*read) {
        if (*read != ch)
            *write++ = *read;
        read++;
    }
    *write = '\0';
}

int main(void)
{
    char str[100] = "Advanced Micro Devices";
    char ch = 'e';

    printf("Original       : %s\n", str);
    remove_char(str, ch);
    printf("Removed '%c'    : %s\n", ch, str);
    return 0;
}
