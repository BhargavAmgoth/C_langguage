/************************************/ /***************************************

	255. Write a C program to copy one string to another string.

************************************/ /***************************************/

#include<stdio.h>
void main()
{
	char string_1[10], string_2[10];

	int i;

	printf("Enter the charecter of string_1\n");

	scanf("%s", string_1);
	
	printf("Enterend string is: %s\n", string_1);

	for (i=0; i<10; i++)
	{

		string_2[i] = string_1[i];	

	}

	printf("Copyed string is: %s\n", string_2);
}
