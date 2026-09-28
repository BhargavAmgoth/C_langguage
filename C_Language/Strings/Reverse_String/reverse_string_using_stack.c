/*
 * Reverse a string using a stack (LIFO).
 * Push every character, then pop them back into the string.
 * Time: O(n)   Space: O(n)
 */
#include <stdio.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c)
{
    if (top < MAX - 1)
        stack[++top] = c;
}

char pop(void)
{
    if (top >= 0)
        return stack[top--];
    return '\0';
}

int main(void)
{
    char str[MAX] = "Hello AMD";
    int i;

    printf("Original string : %s\n", str);

    for (i = 0; str[i] != '\0'; i++)
        push(str[i]);

    for (i = 0; str[i] != '\0'; i++)
        str[i] = pop();

    printf("Reversed string : %s\n", str);
    return 0;
}
