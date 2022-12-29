/**************************************/ /********************************

			61. Write a C program to count number of digits in any number.

***************************************/ /*******************************/

#include<stdio.h>
void main()
{
	int number,sum;

	printf("Enter any number\n");
	scanf("%d", &number);
	
	sum = 0;
	while (number != 0)
	{
		number = number/10;
		sum++;
	}
	printf("Number of digits for a given number is: %d\n", sum);
}
