/*
 * Way 10: Reading multiple strings into a 2D char array
 *
 * - char names[5][50] holds 5 strings of up to 49 characters each.
 * - names[i] is the address of the i-th string.
 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char names[5][50];
    int n, i;
    char line[50];

    printf("How many strings (1-5)? ");
    if (fgets(line, sizeof(line), stdin) == NULL || sscanf(line, "%d", &n) != 1)
        return 1;
    if (n < 1 || n > 5) {
        puts("Enter a number from 1 to 5.");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter string %d: ", i + 1);
        if (fgets(names[i], sizeof(names[i]), stdin) == NULL) {
            puts("Could not read the string.");
            return 1;
        }
        if (strchr(names[i], '\n') == NULL) {
            int ch = getchar();
            if (ch != EOF && ch != '\n') {
                while (ch != '\n' && ch != EOF)
                    ch = getchar();
                puts("String is too long for its 50-character buffer.");
                return 1;
            }
        }
        names[i][strcspn(names[i], "\r\n")] = '\0';
    }

    printf("\nYou entered:\n");
    for (i = 0; i < n; i++)
        printf("%d. %s\n", i + 1, names[i]);
    return 0;
}
