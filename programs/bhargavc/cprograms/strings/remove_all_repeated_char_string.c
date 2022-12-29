/************************************/ /**************************************************
	
	280. Write a C program to remove all repeated characters from a given string.

***************************************/ /********************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE];
	int i,j, k;
	
	printf("Enter the string\n");
	gets(string_1);

	for(i=0; string_1[i] != '\0'; i++)
	{
		for(j=i+1; string_1[j] != '\0'; j++)
		{
			if (string_1[i] == string_1[j])
			{
				for (k=j; string_1[k] != '\0'; k++)
				{
					string_1[k] = string_1[k+1];
				}
			}
		}
	}

	printf("%s\n", string_1);
}
