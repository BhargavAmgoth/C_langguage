/*
 * Check whether two strings are anagrams by sorting both and comparing.
 * Time: O(n^2) with bubble sort (O(n log n) with qsort)
 */
#include <stdio.h>
#include <string.h>

void sort_string(char *s)
{
    int n = (int)strlen(s);
    int i, j;
    char t;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (s[j] > s[j + 1]) {
                t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }
        }
    }
}

int main(void)
{
    char str1[100] = "listen";
    char str2[100] = "silent";

    printf("\"%s\" and \"%s\" -> ", str1, str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Not anagram\n");
        return 0;
    }

    sort_string(str1);
    sort_string(str2);

    printf("%s (sorted: %s / %s)\n",
           strcmp(str1, str2) == 0 ? "Anagram" : "Not anagram", str1, str2);
    return 0;
}
