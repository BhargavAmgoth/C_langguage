/***********************************/ /****************************************

	254. Write a C program to find length of a string.

***********************************/ /****************************************/

#include<stdio.h>
void main ()
{
	char string[10];
	int length=0, i;

	printf("Enter the string size upto 9\n");
	scanf("%s", string);

	printf("%s\n", string);

	for (i=0; i<10; i++)
	{

		if(string[i] != '\0')
		{
			length++;
		}
	}

	printf("%d\n", length);
}

