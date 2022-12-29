/***********************************************/ /**************************************

	293. Write a C program to trim trailing white space characters in a string.

*************************************************/ /*************************************/

#include<stdio.h>
#include<string.h>
#define SIZE 100
void main()
{
	char string_1[SIZE];

	int i, j, len;

	printf("Enter the string\n");
	gets(string_1);
	
	while(string_1[i] == ' ')
	{
		for(j=0; string_1[j] != '\0'; j++)
		{
			string_1[j] = string_1[j+1];
		}
	}
//	string_1[i-j] = '\0';
	printf("%s\n", string_1);
}
