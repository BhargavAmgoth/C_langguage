/******************************/ /*****************************

	76. Write a C program to find HCF (GCD) of two numbers.


*******************************/ /****************************/


#include<stdio.h>
void main()
{
	int a , b, numo, denom, rem, gcd;

	printf("Enter any two numbers\n");
	scanf("%d%d", &a, &b);

	if (a > b)
	{
		numo = a;
		denom = b;
	}
	else 
	{
		numo = b;
		denom = a;
	}

	rem = numo % denom;

	while (rem !=0)
	{
		numo = denom;
		denom = rem;

		rem = numo % denom;
	}

	gcd = denom;
	printf("The HFC (GCD) of given two numbers is %d\n", gcd);
}
