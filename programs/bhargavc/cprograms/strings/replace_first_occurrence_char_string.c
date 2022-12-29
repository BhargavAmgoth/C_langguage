/*****************************************************/ /***************************************


	281. Write a C program to replace first occurrence of a character with another in a string.

****************************************************/ /******************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE], ch, replace_ch;

	int i, j;

	printf("Enter the string\n");
	gets(string_1);
	
	printf("Enter the charecter\n");
	scanf("%c", &ch);
	
	getchar();
	printf("Enter the charecter you want to replace\n");
	scanf("%c", &replace_ch);

	for (i=0; string_1[i] != '\0'; i++)
	{
		if (string_1[i] == ch)
		{
			string_1[i] = replace_ch;
			break;
		}
	}
	printf("%s\n", string_1);

}	

