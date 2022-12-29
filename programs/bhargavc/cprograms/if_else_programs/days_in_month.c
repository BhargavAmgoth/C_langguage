/*******
 	 29. Write a C program to input month number and print number of days in that month.
	 *******/

#include<stdio.h>
void main()
{
	int number;

	printf("Enter the month number to get the number of days in a month\n");
	scanf("%d", &number);

	if (number >= 1 && number <= 12)
	{
		if ((number == 1) || (number == 3) || (number == 5) || (number == 7) || (number == 8) || (number == 10) || (number == 12))
		{
			printf("Given month %d has 31 Days\n", number);
		}

		else if ((number == 4) || (number == 6) || (number == 9) || (number == 11))
		{
			printf("Given month %d has 30 Days\n", number);
		}
		else
		{
			printf("Given month %d has 28 Days\n", number);
		}
	}

	else 
	{
		printf("Enter any month number from 1 to 12\n");
	}
}
