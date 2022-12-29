/***********
	30. Write a C program to count total number of notes in given amount.

***********/

#include<stdio.h>
void main ()
{
	int amount, count;

	printf("Enter the amount you have\n");
	scanf("%d", &amount);

	if (amount >= 2000)
	{
		count = amount/2000;
		printf("For given amount %d have %d 2000 notes\n", amount, count);
	}
	if (amount >= 500)
	{
		count = amount/500;
		printf("For given amount %d have %d 500 notes\n", amount, count);
	}
	if (amount >= 100) 
	{
		count = amount/100;
		printf("For given amount %d have %d 100 notes\n", amount, count);
	}
	if (amount >= 10)
	{
		count = amount/10;
		printf("For given amount %d have %d 10 notes\n", amount, count);
	}
	if (amount < 10)
	{
		count = amount/1;
		printf("For given amount %d have %d ruppies\n", amount, count);
	}
}
