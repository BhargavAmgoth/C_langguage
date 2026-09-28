/*
 * Concatenate two strings without strcat(), using loops.
 */
#include <stdio.h>

int main(void)
{
    char str1[100] = "Hello ";
    char str2[50] = "AMD";
    int i = 0;
    int j = 0;

    while (str1[i] != '\0')     /* go to end of str1 */
        i++;

    while (str2[j] != '\0') {   /* append str2 */
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Concatenated string : %s\n", str1);
    return 0;
}
