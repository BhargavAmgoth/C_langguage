/* 40. Write a C program print total number of days in a month using switch case.  */


#include<stdio.h>
void main()
{
	int month_num;

	printf("Enter any month number in 12 moths\n");
	scanf("%d", &month_num);

	switch (month_num)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("Given month has 31 Days\n");
			break;

		case 4: 
		case 6:
		case 9:
		case 11:
			printf("Given month has 30 Days\n");
			break;

		case 2: 
			printf("Given month has 28 Days or 29 Days in Leap Year\n");
			break;

		default:
			printf("Give vallid month number to get number of days\n");
			break;
	}
}
