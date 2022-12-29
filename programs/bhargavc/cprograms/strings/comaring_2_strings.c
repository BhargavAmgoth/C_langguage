/**************************************/ /*******************************************

	257. Write a C program to compare two strings.

*************************************/ /********************************************/

#include<stdio.h>
void main()
{
	char string_1[10], string_2[10];

	//int i, j=0;

	printf("Enter the strings\n");

	scanf("%s%s", string_1, string_2);

	printf("The string_1 is: %s\nThe string_2 is: %s\n", string_1, string_2);
	
	int i, j=0;
	for (i=0; string_1[i] != '\0'; i++)
	{
		if(string_1[i] != string_2[i])
		{
			j++;
			break;
		}
	}
//	printf("%d",j);
	if (j>0)
	{
		printf("Given two strings are not same\n");
	}
	else
	{
		printf("Given two strings are same\n");
	}

}
