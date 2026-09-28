/*
 * Compare two strings without strcmp(), using a loop.
 * Result: 0 if equal, <0 if str1 < str2, >0 if str1 > str2
 */
#include <stdio.h>

int main(void)
{
    char str1[100] = "AMD";
    char str2[100] = "AME";
    int i = 0;
    int result;

    while (str1[i] != '\0' && str1[i] == str2[i])
        i++;

    result = (unsigned char)str1[i] - (unsigned char)str2[i];

    if (result == 0)
        printf("\"%s\" and \"%s\" are equal\n", str1, str2);
    else if (result < 0)
        printf("\"%s\" is less than \"%s\"\n", str1, str2);
    else
        printf("\"%s\" is greater than \"%s\"\n", str1, str2);
    return 0;
}
