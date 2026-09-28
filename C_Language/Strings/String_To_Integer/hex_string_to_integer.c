/*
 * Convert a hexadecimal string (e.g. "0x1A3F") to an integer.
 * Very common in embedded / driver interviews (register values).
 */
#include <stdio.h>

int hex_value(char c)
{
    if (c >= '0' && c <= '9')
        return c - '0';
    if (c >= 'a' && c <= 'f')
        return c - 'a' + 10;
    if (c >= 'A' && c <= 'F')
        return c - 'A' + 10;
    return -1;
}

unsigned int hex_to_int(const char *s)
{
    unsigned int result = 0;
    int v;

    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X'))
        s += 2;

    while ((v = hex_value(*s)) != -1) {
        result = (result << 4) | (unsigned int)v;     /* result * 16 + v */
        s++;
    }
    return result;
}

int main(void)
{
    printf("0x1A3F     = %u\n", hex_to_int("0x1A3F"));
    printf("FF         = %u\n", hex_to_int("FF"));
    printf("0xDEADBEEF = %u\n", hex_to_int("0xDEADBEEF"));
    return 0;
}
