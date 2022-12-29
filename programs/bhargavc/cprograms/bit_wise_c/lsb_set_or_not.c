/*******************************/ /************************************************

	109.
Write a C program to check Least Significant Bit (LSB) of a number is set or
not.

*************************************/ /********************************************/

#include<stdio.h>
void main()
{
	int a, b, c;

	scanf("%d%d", &a, &b);

	c = a&b;
        printf("%d, \t%x\n", c, c);
        

}

