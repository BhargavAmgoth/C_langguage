/******************************************/ /********************************************

	Write a C program to count frequency of each character in a string.

*******************************************/ /********************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE], visited;
	int i, j, a[SIZE], grater=0, len, index=0;

	printf("Enter the string\n");
	gets(string_1);

	for (i=0; string_1[i] != '\0'; i++);

	len = i;

	for (i=0; string_1[i] != '\0'; i++)
	{

		a[i] = 1;
		for (j=i+1; string_1[j] != '\0'; j++)
		{
			if (string_1[i] == string_1[j])
			{
				a[i]++;
				string_1[j] = '0';
			}
		}
	}
	for(i=0; i<len ; i++)
	{
		if(string_1[i] != ' ' && string_1[i] != '0')
			printf("%c is present %d times\n", string_1[i], a[i]);
	}
}
