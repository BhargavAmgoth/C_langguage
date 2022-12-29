/****** 
 	24. Write a C program to check whether a character is alphabet or not.  
*******/

#include<stdio.h>
void main ()
{
	char ch;

	printf("Enter any charecter\n");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
	{
		printf("Given charecter %c is an alphabet\n", ch);
	}
	else 
	{
		printf("Given charecter %c is mot an alphabet\n", ch);
	}
}
