/* 49. Write a C program to check whether year is leap year or not using conditional/ternary
operator. */

#include<stdio.h>
void main ()
{
	int Year;

	printf("Enter the year:\n");
	scanf("%d", &Year);

	(Year % 400 == 0) || ((Year % 100 != 0) && (Year % 4 == 0)) ? printf("Given year %d is a leap year\n", Year) : printf("Given year %d is not a leap year\n", Year);
}

