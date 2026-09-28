/*
 * Find the length of a string entered by the user, using recursion (no loop).
 */
#include <stdio.h>

int length_recursive(const char *s)
{
    if (*s == '\0')             /* base case */
        return 0;
    return 1 + length_recursive(s + 1);
}

/* remove the trailing newline that fgets keeps ('\r' too, for Windows) */
void remove_newline(char *s)
{
    if (*s == '\0')
        return;
    if (*s == '\n' || *s == '\r') {
        *s = '\0';
        return;
    }
    remove_newline(s + 1);
}

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL)
        return 1;

    remove_newline(str);

    printf("String : %s\n", str);
    printf("Length : %d\n", length_recursive(str));
    return 0;
}
