/********************************************/ /**********************************************

	Write a c program to print the factorial by using recursive functions

*********************************************/ /**********************************************/

#include<stdio.h>
int factorial(int);
void main()
{
	int num, fact;

	printf("Enter any number\n");
	scanf("%d", &num);

	printf("The factorial of a given number %d is: %d\n",num, factorial(num));

}

int factorial(int num)
{
	int fact;
	
	fact = 1;
	if (num ==1)
	{	
		return 1;
	}
	else
	{
		fact = num * factorial(num-1);
	}

	return fact;
}

