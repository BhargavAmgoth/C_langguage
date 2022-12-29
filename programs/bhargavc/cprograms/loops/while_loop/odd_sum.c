/***********************************/ /*************************************

58. Write a C program to find sum of all odd numbers between 1 to n.

************************************/ /************************************/


#include<stdio.h>
void main()
{
	int num1, end, odd_sum;

	printf("Enter any two values\n");
	scanf("%d%d", &num1, &end);

	while (num1 < end)
	{
		if (num1 % 2 != 0)
		{
			odd_sum += num1;
		}

		++num1;
	}
	printf("The sum of odd numbers is: %d\n", odd_sum);
}
