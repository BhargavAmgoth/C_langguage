/* 50. Write a C program to check whether character is an alphabet or not using
conditional/ternary operator. */

#include<stdio.h>
void main()
{
	char ch;

	printf("Enter any charecter:\n");
	scanf("%c", &ch);

	(ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') ? printf("Given charecter %c is an alphabet\n", ch) : printf("Given charecter %c is not an alphabet\n", ch);
}
