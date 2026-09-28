/*
 * Implement itoa(): convert an integer to a string in any base (2..16).
 * Extract digits using % and /, then reverse the result.
 */
#include <stdio.h>

void reverse(char *s, int len)
{
    int i = 0, j = len - 1;
    char t;

    while (i < j) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
}

char *my_itoa(int value, char *buf, int base)
{
    const char digits[] = "0123456789ABCDEF";
    unsigned int num;
    int i = 0;
    int negative = 0;

    if (base < 2 || base > 16) {
        buf[0] = '\0';
        return buf;
    }

    /* only base 10 shows a minus sign; other bases print the raw bits */
    if (value < 0 && base == 10) {
        negative = 1;
        num = 0u - (unsigned int)value;     /* safe even for INT_MIN */
    } else {
        num = (unsigned int)value;
    }

    do {
        buf[i++] = digits[num % base];
        num /= base;
    } while (num != 0);

    if (negative)
        buf[i++] = '-';
    buf[i] = '\0';

    reverse(buf, i);
    return buf;
}

int main(void)
{
    char buf[40];

    printf("my_itoa(1234, 10)  = %s\n", my_itoa(1234, buf, 10));
    printf("my_itoa(-567, 10)  = %s\n", my_itoa(-567, buf, 10));
    printf("my_itoa(255, 16)   = %s\n", my_itoa(255, buf, 16));
    printf("my_itoa(10, 2)     = %s\n", my_itoa(10, buf, 2));
    printf("my_itoa(0, 10)     = %s\n", my_itoa(0, buf, 10));
    return 0;
}
