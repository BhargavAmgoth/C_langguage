/************************************/ /***************************************

	274. Write a C program to find highest frequency character in a string.

***************************************/ /**************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE], ch;
	int i, j, a, grater=0, index=0;

	printf("Enter the string\n");
	gets(string_1);

	for (i=0; string_1[i] != '\0'; i++)
	{
		a = 0;
		for (j=0; string_1[j] != '\0'; j++)
		{
			if (string_1[i] == string_1[j])
			{
				a++;
			}
		}
		if (grater < a)
		{
			grater = a;
			index = i;
		}
	}
	if (grater == 1)
	{
		printf("In a given string all charecters are in same frequency\n");
	}
	else
	{
		printf("The highest frequency charecter is :%c \n%c is present %d times in a given string\n", string_1[index], string_1[index], grater);

	}
}
