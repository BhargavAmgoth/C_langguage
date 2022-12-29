/**************************/ /**************************************
	
	56. Write a C program to find sum of all natural numbers between 1 to n.

***************************/ /***************************************/

#include<stdio.h>
void main()
{
	int num1, end, sum;

	printf("Enter any twovalues\n");
	scanf("%d%d", &num1, &end);

	while (num1 <= end)
	{
		sum += num1;
		++num1;
	}
	printf("The sum of natural numbersw is: %d\n", sum);
}

