/**********************************/ /*********************************

	75. Write a C program to enter any number and calculate its factorial.

***********************************/ /********************************/

#include<stdio.h>
void main()
{
	int num, factorial = 1, count = 0;

	printf("Enter any number\n");
	scanf("%d", &num);

	while (num != 0)
	{
	
		factorial = factorial * num;
		printf("%d\n", num);

		num--;	
	}
	printf("The factorial is %d\n", factorial);
}
