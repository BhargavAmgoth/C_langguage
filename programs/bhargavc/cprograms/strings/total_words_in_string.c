/***************************************************/ /**************************************************

	265. Write a C program to count total number of words in a string.

****************************************************/ /***************************************************/

#include<stdio.h>
void main()
{
	char string_1[10];
	int words_count=1, i;

	printf("Enter the string\n");
	gets(string_1);

	for (i=0; string_1[i] != '\0'; i++)
	{
		if(string_1[i] == ' ')
		{
			words_count++;
		}
	}
	printf("The number of words in a given string is: %d\n", words_count);
}

