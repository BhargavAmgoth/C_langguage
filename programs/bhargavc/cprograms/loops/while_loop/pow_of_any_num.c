/************************************************/ /*********************************************

	73. Write a C program to find power of any number using for loop.

************************************************/ /*********************************************/

#include<stdio.h>
void main()
{
	int a, b, c;

	printf("Enter any two numbers\n");
	scanf("%d%d", &a, &b);

	c = 1;
	while (b > 0)
	{	
		c = c * a;

		b = b - 1;
	}
	printf("%d is the power of given value\n", c);
}
