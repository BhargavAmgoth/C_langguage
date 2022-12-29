/* 39. Write a C program to print day of week name using switch case. */


#include<stdio.h>
void main()
{
	int a;

	printf("Enter any weekday in 7 weeks\n");
	scanf("%d",&a);

	switch (a)
	{
		case 1: 
			printf("MonDay\n");
			break;

		case 2:
                        printf("TuesDay\n");
                        break;

		case 3:
                        printf("WednesDay\n");
                        break;

		case 4:
                        printf("ThursDay\n");
                        break;

		case 5:
			printf("FriDay\n");
			break;

		case 6:
			printf("SaturDay\n");
			break;

		case 7:
			printf("SunDay\n");
			break;

		default :

			printf("Enter the vallid WeekDay to get Week Name\n");
			break;

	}
}
