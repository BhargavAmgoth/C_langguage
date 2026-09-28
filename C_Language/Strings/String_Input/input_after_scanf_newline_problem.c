/*
 * Common problem: reading a string AFTER scanf("%d")
 *
 * scanf("%d") reads the number but leaves the '\n' (Enter key) in the
 * input buffer. The next fgets() sees that '\n' immediately and returns
 * an EMPTY string - it looks like the input was "skipped".
 *
 * Fixes:
 *   1. Clear the buffer:  while ((c = getchar()) != '\n' && c != EOF);
 *   2. Use " %[^\n]"  - the leading space skips whitespace/newlines.
 *   3. Read everything with fgets() and convert with sscanf().
 *
 * NOTE: fflush(stdin) is undefined behaviour in standard C - don't use it.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    int age;
    char name[50];
    int c;

    printf("Enter your age: ");
    if (scanf("%d", &age) != 1)
        return 1;

    /* Fix 1: throw away the rest of the line, including '\n' */
    while ((c = getchar()) != '\n' && c != EOF)
        ;

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) == NULL)
        return 1;
    name[strcspn(name, "\r\n")] = '\0';

    printf("Name: %s, Age: %d\n", name, age);
    return 0;
}
