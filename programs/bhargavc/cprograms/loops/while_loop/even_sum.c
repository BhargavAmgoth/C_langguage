/******************************/ /*****************************************

	56. Write a C program to find sum of all even numbers between 1 to n.

*******************************/ /*****************************************/

#include<stdio.h>
void main()
{
	int num1, end, even_sum;

	printf("Enter any two values\n");
	scanf("%d%d", &num1, &end);

	while (num1 <= end)
	{
		if (num1 % 2 == 0)
		{
			even_sum += num1;
		}
		num1++;
	}
	printf("Sum of even numbers is: %d\n", even_sum);
}
