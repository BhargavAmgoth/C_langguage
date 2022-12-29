/***************************/ /*********************************

	65. Write a C program to calculate sum of digits of any number.

****************************/ /***********************************/

#include<stdio.h>
void main()
{
	int num, m, sum;

	printf("Enter any number\n");
	scanf("%d", &num);

	sum = 0;

	while (num > 0)
	{	
		m = num % 10;
		sum += m;
		num = num/10;
		printf("digits %d\n", m);
	}
	printf("%d is sum of all digits\n", sum);
}
