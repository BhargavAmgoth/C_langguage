/********
 	28. Write a C program to input week number and print week day.
********/

#include<stdio.h>
void main()
{
	int number;

	printf("Enter any week number\n");
	scanf("%d", &number);

	if (number >= 1 && number <= 7)
	{
		if (number == 1)
		{
			printf("The given week number %d is for Monday\n", number);
		}

		else if (number == 2)
                {
                        printf("The given week number %d is for TuesDay\n", number);
                }
		
		else if (number == 3)
                {
                        printf("The given week number %d is for WednesDay\n", number);
                }

		else if (number == 4)
                {
                        printf("The given week number %d is for ThursDay\n", number);
                }

		else if (number == 5)
                {
                        printf("The given week number %d is for FriDay\n", number);
                }

		else if (number == 6)
                {
                        printf("The given week number %d is for SaturDay\n", number);
                }

		else if (number == 7)
                {
                        printf("The given week number %d is for SunDay\n", number);
                }
	}

	else
	{
		printf("Enter any value from 1 to 7\n");
	}
}
