/************************************/ /*******************************

	62. Write a C program to find first and last digit of any number.

**********************************/ /**********************************/

#include<stdio.h>
void main()
/*******************8
{
    int n, sum=0, firstDigit, lastDigit;
    printf("Enter number = ");
    scanf("%d", &n);
    // Find last digit of a number
    lastDigit = n % 10;
    //Find the first digit by dividing n by 10 until n greater then 10
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    printf("first digit = %d and last digit = %d\n\n", firstDigit,lastDigit);
}
***********/
{
	int number,first_digit, last_digit;

	printf("Enter any number\n");
	scanf("%d", &number);
	
	last_digit = number%10;

	while (number >= 10)
	{
		number = number/10;
	}
	first_digit = number;

	printf("The first_digit is: %d\nThe Last_digit is: %d\n", first_digit, last_digit);
	
}  

