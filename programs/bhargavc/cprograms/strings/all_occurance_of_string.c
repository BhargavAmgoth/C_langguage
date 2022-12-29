/***********************************************/ /*****************************************

	272. Write a C program to search all occurrences of a character in given string.

************************************************/ /******************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE], ch;
	int i;

	printf("Enter the string\n");
	gets(string_1);

	printf("Enter the charecter which is present in the string\n");
	scanf("%c", &ch);

	for (i=0; string_1[i] != '\0'; i++)
	{
		if (string_1[i] == ch)
		{
			printf("The given charecter is present in the index: %d\n", i);
		}
	}
}
