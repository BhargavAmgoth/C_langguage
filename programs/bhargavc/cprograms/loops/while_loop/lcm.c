/*****************************************/ /**************************************

	77. Write a C program to find LCM of two numbers.

******************************************/ /************************************/


#include<stdio.h>
void main()
{
        int a , b, numo, denom, rem, gcd, lcm;

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
	
	lcm = (a*b)/gcd;

        printf("The HFC (GCD) of given two numbers is %d\n", gcd);
	printf("The lcm of the given two numbers is %d\n", lcm);
}

