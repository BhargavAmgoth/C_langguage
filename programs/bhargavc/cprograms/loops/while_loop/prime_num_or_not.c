/***********************************************/ /******************************************

	79. Write a C program to check whether a number is Prime number or not.

************************************************/ /******************************************/

#include<stdio.h>
void main()
{
	int num, count = 1, factors = 0;

	printf("Enter any number\n");
	scanf("%d", &num);

	while (count <= num)
	{
		if (num % count == 0)
		{
			printf("%d\n", count);

			factors++;

		}

		count++;
	}

	if (factors == 2)
	{
		printf("Is a Prime number number\n");
	}
	else 
	{
		printf("Is not a Prime number\n");
	}
}
