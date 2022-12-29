/***********    
        52. Write a C program to print all natural numbers in reverse (from n to 1). - using while
loop    *************/

#include<stdio.h>
void main ()
{
        int num1, num2;

        printf("Enter any two numbers\n");
        scanf("%d%d", &num1, &num2);

	while (num2 <= num1)
	{
		printf("%d\n", num1);
		--num1;
	}
}
