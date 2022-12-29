#include<stdio.h>
void main ()
{
	int Year;

	printf("Enter the Year\n");
	scanf("%d",&Year);

	if (((Year%400 == 0) && (Year%100 != 0)) || (Year%4 == 0))
	{
		printf("Given Year %d is leap year\n", Year);
	}
	else 
	{
		printf("Given Year %d is not a leap year\n", Year);
	}
}
