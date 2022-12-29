/******************************/ /**********************************

	59. Write a C program to print multiplication table of any number.

******************************/ /************************************/

#include<stdio.h>
void main ()
{
	int num1, num2;

	printf("Enter any value:\n");
	scanf("%d", &num1);
	
	num2 = 1;
	while (num2 <= 20)
	{
		printf("%d * %d = %d\n", num1, num2, num1*num2);
		
		++num2;
	}
}

