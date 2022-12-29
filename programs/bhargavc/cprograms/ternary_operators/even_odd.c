/* 48. Write a C program to check whether a number is even or odd using
conditional/ternary operator. */


#include<stdio.h>
void main()
{
	int Number;

	printf("Enter any number:\n");
	scanf("%d", &Number);

	(Number % 2 == 0)? printf("Given number %d is Even\n", Number) : printf("Given number %d is odd\n", Number);
}
