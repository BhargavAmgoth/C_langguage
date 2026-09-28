/*
 * Extract a substring given a start position and a length.
 */
#include <stdio.h>

int substring(const char *src, int pos, int len, char *dest)
{
    int src_len = 0;
    int i;

    while (src[src_len])
        src_len++;

    if (pos < 0 || pos >= src_len || len < 0)
        return -1;

    for (i = 0; i < len && src[pos + i] != '\0'; i++)
        dest[i] = src[pos + i];
    dest[i] = '\0';
    return 0;
}

int main(void)
{
    char str[100] = "Advanced Micro Devices";
    char sub[100];

    if (substring(str, 9, 5, sub) == 0)
        printf("Substring(9, 5) of \"%s\" = \"%s\"\n", str, sub);
    return 0;
}
