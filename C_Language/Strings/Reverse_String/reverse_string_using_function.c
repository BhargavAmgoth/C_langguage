/*
 * Reverse a string using a user-defined function.
 * Time: O(n)   Space: O(1)
 */
#include <stdio.h>

int my_strlen(const char *s)
{
    int len = 0;
    while (s[len] != '\0')
        len++;
    return len;
}

void reverse_string(char *s)
{
    int i = 0;
    int j = my_strlen(s) - 1;
    char temp;

    while (i < j) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}

int main(void)
{
    char str[100] = "Hello AMD";

    printf("Original string : %s\n", str);
    reverse_string(str);
    printf("Reversed string : %s\n", str);
    return 0;
}
