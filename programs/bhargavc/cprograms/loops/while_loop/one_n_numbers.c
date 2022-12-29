/***** 51. Write a C program to print all natural numbers from 1 to n. - using while loop *****/

#include<stdio.h>
void main()
{
	int num1, num2;
	printf("Enter any two values\n");
	scanf("%d%d", &num1, &num2);

	while (num1 <= num2)
	{
		
		printf("%d\n",num1);
		num1++;
	}
}
