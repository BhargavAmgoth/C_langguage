/*
 * Way 9: Dynamic memory (malloc / realloc) - input of ANY length
 *
 * - Start with a small buffer and double it whenever it gets full.
 * - No fixed limit on the input size.
 * - Remember to free() the memory at the end.
 */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char *read_line(void)
{
    unsigned long capacity = 8;
    unsigned long len = 0;
    char *buf = malloc(capacity);
    char *tmp;
    int ch;

    if (buf == NULL)
        return NULL;

    while ((ch = getchar()) != '\n' && ch != EOF) {
        if (ch == '\r')
            continue;
        if (len + 1 == capacity) {          /* keep 1 byte for '\0' */
            if (capacity > INT_MAX / 2) {
                free(buf);
                return NULL;
            }
            capacity *= 2;
            tmp = realloc(buf, capacity);
            if (tmp == NULL) {
                free(buf);
                return NULL;
            }
            buf = tmp;
        }
        buf[len++] = (char)ch;
    }
    buf[len] = '\0';
    return buf;
}

int main(void)
{
    char *str;

    printf("Enter a string of any length: ");
    str = read_line();
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("You entered: %s\n", str);
    free(str);
    return 0;
}
