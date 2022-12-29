/***********************************/ /**************************************

	256. Write a C program to concatenate two strings.

***********************************/ /***************************************/


#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE], string_2[SIZE];
	int i, j;

	printf("Enter the 9 charecters in string\n");
	gets(string_1);
	gets(string_2);
	printf("The String_1 is: %s\nThe string_2 is: %s\n", string_1, string_2);
	
	for (i=0; string_1[i] != '\0'; i++)
	{

	}
	for (j=0; string_1[j] != '\0'; j++)
       	{
		string_1[i] = string_2[j]; 
		i++;
	}
	printf(" ");
	printf("The concatenated string is: %s\n", string_1);
}
