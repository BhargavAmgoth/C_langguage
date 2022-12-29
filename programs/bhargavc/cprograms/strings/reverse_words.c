/******************************************/ /***************************************

	268. Write a C program to reverse order of words in a given string.

******************************************/ /**************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE], rev_word[SIZE], rev_word_string[SIZE];
	int i, j, k=0, count=0, str_len;
	printf("Enter the string\n");
	gets(string_1);
	
	for(i=0; string_1[i] != '\0'; i++);

	str_len = i-1;
	
	for(j=0; string_1[j] != '\0'; j++)
	{
		rev_word[j] = string_1[str_len];
		str_len--;	
	}
	rev_word[j] = '\0';
	printf("%s\n", rev_word);
	
	for (i=0; rev_word[i] != '\0'; i++)
	{
		for(j=0; rev_word[j+1] != '\0' && rev_word[j+1] != ' '; j++)
		{
			count++;
		}
		for (; k<count; k++)
		{
			rev_word_string[k] = rev_word[count];
			count--;
		}
		if(rev_word[i] != ' ')
		{
			k=k-1;
			rev_word_string[k] = ' ';
		}
		
	}
	rev_word
	printf("%s\n", rev_word_string);


}
/*

#include<stdio.h>
void main()
{
	char string[50],string1[50];
	int i,j=0,len=0;
	printf("enter any string\n");
	gets(string);
	for(i=0;string[i] != '\0'; i++)
	{
		len++;
	}
	for(i=len-1; string[i] >=0; i--,j++)
	{
		string1[j] = string[i];
	}
	string[j]='\0';
	for(i=0; string1[i] != '\0';i++)
	{
		if((string1[i+1] == ' ') || (string1[i+1] == '\0'))
		{
			for(j=i; j>=0 && string1[j] != ' '; j--)
			{
				printf("%c",string1[j]);
			}
			printf(" ");
		}
	}
}
*/
