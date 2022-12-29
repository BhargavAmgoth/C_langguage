/************************************************************/ /*************************************************************************

	296. Write a C program to remove all extra blank spaces from a given string.

***************************************************************/ /***********************************************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
	char str[SIZE];
	int i, j, len=0;

	printf("Enter the string\n");
	gets(str);

	printf("The entered string is %s\n", str);
	
	//for(i=0; str[i] != '\0'; i++);
	//len = i

	for(i=0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			for (j=i; str[j] != '\0'; j++)
			{
				str[j] = str[j+1];
			}
			i--;
		}
	}
	printf("After removing all extra spaces '%s'\n", str);
}
