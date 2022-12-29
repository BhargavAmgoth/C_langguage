/****************************************/ /******************************************

	266. Write a C program to find reverse of a string.

******************************************/ /************************************************/

#include<stdio.h>
void main()
{
	char string_1[20], rev_string[10];

	printf("Enter the String\n");

	gets(string_1);
	
	int i, count=0;
	for(i=0; string_1[i] != '\0'; i++)
	{
		//count++;
	}
	count = i-1;
	for(i=0; string_1[i] != '\0'; i++)
	{
		rev_string[count] = string_1[i];
		printf("%s", rev_string[count];
		count--;
	}
	printf("Reverse of string is: %s\n", rev_string);
}
