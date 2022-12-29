/***************************************/ /**************************************************

	285. Write a C program to find first occurrence of a word in a given string.

*******************************************/ /************************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE], word_string[SIZE];

	int i, j, flag;

	printf("Enter the string\n");
	gets(string_1);
	
	printf("Enter the word\n");
	gets(word_string);

	for(i=0; string_1[i] != '\0'; i++)
	{
		if(string_1[i] == word_string[0])
		{
			flag = 1;
			for(j=0; word_string[j] != '\0'; j++)
			{
				if(string_1[i+j] != word_string[j])
				{
					flag = 0;
					break;
				}
			}
			if (flag == 1)
			{
				break;
			}
		}
	}
	if(flag == 0)
	{
		printf("%s the given word is not found in given string\n", word_string);
	}
	else
	{
		printf("%s the given word is present in the given string\n", word_string);
	}
}
