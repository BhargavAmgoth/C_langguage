/*******************************************/ /******************************************************

	271. Write a C program to find last occurrence of a character in a given string.

*******************************************/ /****************************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE], ch;

	int i, index=0, count=0;

	printf("Enter the string\n");
	gets(string_1);
	
	printf("Eneter any one charecter occurance\n");
	scanf("%c", &ch);	

	for (i=0; string_1[i] != '\0'; i++)
	{

		if(ch == string_1[i])
		{
			index = i;
		}
		else
			count++;
	}

	if(index > 0)
	{
		printf("The given charecter is present at index: %d\n", index);
	}
        for (i=0; string_1[i] != '\0'; i++);

	if(i==count)
	{
		printf("Entered charecter is not present in string\n");
	}
}

