/*
 * Implement our own atoi(): convert a string to an integer.
 * Handles leading spaces, +/- sign, and stops at the first non-digit.
 * Also clamps on overflow to INT_MAX / INT_MIN.
 */
#include <stdio.h>
#include <limits.h>

int my_atoi(const char *s)
{
    int sign = 1;
    long long result = 0;       /* wider than int so overflow can be detected */

    while (*s == ' ' || *s == '\t')
        s++;

    if (*s == '-' || *s == '+') {
        if (*s == '-')
            sign = -1;
        s++;
    }

    while (*s >= '0' && *s <= '9') {
        result = result * 10 + (*s - '0');
        if (sign * result > INT_MAX)
            return INT_MAX;
        if (sign * result < INT_MIN)
            return INT_MIN;
        s++;
    }
    return (int)(sign * result);
}

int main(void)
{
    const char *tests[] = { "1234", "   -567", "+89abc", "abc", "99999999999" };
    int n = sizeof(tests) / sizeof(tests[0]);
    int i;

    for (i = 0; i < n; i++)
        printf("my_atoi(\"%s\") = %d\n", tests[i], my_atoi(tests[i]));
    return 0;
}
