/************************************/ /***************************************

	275. Write a C program to find lowest frequency character in a string.

***************************************/ /**************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE];
	int i, j, a, lower=0, index=0;

	printf("Enter the string\n");
	gets(string_1);

	for (i=0; string_1[i] != '\0'; i++)
	{
		a = 0;
		for (j=i+1; string_1[j] != '\0'; j++)
		{
			if (string_1[i] == string_1[j])
			{
				a++;
			}
		}
		if (a==1)
		{
			lower = a;
			index = i;
		}
//		printf("The lowest frequency charecter is :%c is present %d times\n", string_1[index], lower);
		}
	printf("The lowest frequency charecter is :%c \n%c is present %d times in a given string\n", string_1[index], string_1[index], lower);
	}
}
