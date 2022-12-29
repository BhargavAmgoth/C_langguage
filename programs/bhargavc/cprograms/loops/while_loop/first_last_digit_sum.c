/*****************************************/ /**************************************** 
 	
  63. Write a C program to find sum of first and last digit of any number.
 
 ****************************************/ /****************************************/

#include<stdio.h>
void main ()
{
	int num, first_digit, last_digit;

	printf("Enter any number\n");
	scanf("%d",&num);
	
//	printf("%d\n", num);


	last_digit = num % 10;

	while (num >= 10)
	{
		num /= 10;
	}
	first_digit = num;

	printf("First Digit %d + Last Digit %d = %d\n", first_digit, last_digit, first_digit+last_digit);
}	
