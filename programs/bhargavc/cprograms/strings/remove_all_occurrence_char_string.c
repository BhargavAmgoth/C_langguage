/*************************************************/ /********************************************

	279. Write a C program to remove last occurrence of a character from string.

************************************************/ /**********************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE], ch;

	int i, j;

	printf("Enter the string\n");
	gets(string_1);
	
	printf("Enter the charecter\n");
	scanf("%c", &ch);

	for (i=0; string_1[i] != '\0'; i++)
	{
		if (string_1[i] == ch)
		{	
			for(j=i; string_1[j] != '\0'; j++)
			{
				string_1[j] = string_1[j+1];
			}
			i--;
		}

	}
	printf("%c is removed from from given string\n%s\n", ch, string_1);

}
