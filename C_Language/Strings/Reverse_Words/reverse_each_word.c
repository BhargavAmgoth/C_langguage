/*
 * Reverse each word but keep the word order.
 * "I love AMD processors" -> "I evol DMA srossecorp"
 */
#include <stdio.h>

void reverse(char *s, int i, int j)
{
    char t;

    while (i < j) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
}

int main(void)
{
    char str[100] = "I love AMD processors";
    int start = 0;
    int i;

    printf("Original : %s\n", str);

    for (i = 0; ; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, start, i - 1);
            start = i + 1;
            if (str[i] == '\0')
                break;
        }
    }

    printf("Result   : %s\n", str);
    return 0;
}
