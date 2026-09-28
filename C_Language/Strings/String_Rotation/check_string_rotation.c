/*
 * Check whether str2 is a rotation of str1.
 * Trick: str2 is a rotation of str1 if lengths match and
 *        str2 is a substring of (str1 + str1).
 * "ABCD" -> "ABCDABCD" contains "CDAB"
 */
#include <stdio.h>
#include <string.h>

int is_rotation(const char *s1, const char *s2)
{
    char temp[200];

    if (strlen(s1) != strlen(s2) || strlen(s1) * 2 >= sizeof(temp))
        return 0;

    strcpy(temp, s1);
    strcat(temp, s1);
    return strstr(temp, s2) != NULL;
}

int main(void)
{
    printf("ABCD / CDAB : %s\n", is_rotation("ABCD", "CDAB") ? "Rotation" : "Not rotation");
    printf("ABCD / ACBD : %s\n", is_rotation("ABCD", "ACBD") ? "Rotation" : "Not rotation");
    return 0;
}
