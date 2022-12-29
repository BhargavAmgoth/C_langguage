/*******************************************/ /******************************************************

	270. Write a C program to find first occurrence of a character in a given string.

*******************************************/ /****************************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE], ch;

	int i, count=0;

	printf("Enter the string\n");
	gets(string_1);
	
	printf("Eneter any one charecter occurance\n");
	scanf("%c", &ch);	

	for (i=0; string_1[i] != '\0'; i++)
	{

		if(ch == string_1[i])
		{
			printf("Entered charecter is present at index: %d\n", i);
			break;
		}
		else
			count++;
	}

       for (i=0; string_1[i] != '\0'; i++);

	if(i==count)
	{
		printf("Entered charecter is not present in string\n");
	}
}
