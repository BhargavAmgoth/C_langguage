/*
 * Rotate a string left or right by k positions (in-place).
 * Uses the reversal algorithm:
 *   left  by k : reverse(0,k-1), reverse(k,n-1), reverse(0,n-1)
 *   right by k : same as left by (n - k)
 * Time: O(n)   Space: O(1)
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

int length(const char *s)
{
    int n = 0;
    while (s[n])
        n++;
    return n;
}

void rotate_left(char *s, int k)
{
    int n = length(s);

    if (n == 0)
        return;
    k %= n;
    reverse(s, 0, k - 1);
    reverse(s, k, n - 1);
    reverse(s, 0, n - 1);
}

void rotate_right(char *s, int k)
{
    int n = length(s);

    if (n == 0)
        return;
    rotate_left(s, n - (k % n));
}

int main(void)
{
    char left[100] = "ABCDEFG";
    char right[100] = "ABCDEFG";

    rotate_left(left, 2);
    rotate_right(right, 2);

    printf("Original       : ABCDEFG\n");
    printf("Left rotate 2  : %s\n", left);
    printf("Right rotate 2 : %s\n", right);
    return 0;
}
