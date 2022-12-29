/******
 	30. Write a C program to count total number of notes in given amount.

******/

#include<stdio.h>
void main ()
{
	int amount, count_2000, count_500, count_100, count_10, count_1_ruppies;

	printf("Enter the amount you have\n");
	scanf("%d", &amount);
	
	if (amount >= 2000)
	{
		count_2000 = (amount/2000);
		count_500 = (amount % 2000) / 500;
		count_100 = (((amount % 2000) % 500) / 100);
		count_10 = ((((amount % 20000) % 500) % 100)/ 10);
		count_1_ruppies = ((((amount % 20000) % 500) % 100) % 10);
		printf("The total amount of %d has\n 2000 notes = %d\n 500 notes = %d\n 100 notes = %d\n 10 notes = %d\n Ruppies = %d\n", amount, count_2000, count_500, count_100, count_10, count_1_ruppies);
	}	
	else if (amount >= 500 && amount < 2000)
	{
		count_500 = (amount / 500);
                count_100 = ((amount % 500) / 100);
                count_10 = (((amount %500) % 100)/ 10);
                count_1_ruppies = (((amount % 500) % 100) % 10);
	       	printf("The total amount of %d has\n 500 notes = %d\n 100 notes = %d\n 10 notes = %d\n Ruppies = %d\n", amount, count_500, count_100, count_10, count_1_ruppies);

	}
	
	else if (amount < 500 && amount >= 100)
        {
                count_100 = (amount / 100);
                count_10 = ((amount % 100)/ 10);
                count_1_ruppies = ((amount % 100) % 10);
                printf("The total amount of %d has\n 100 notes = %d\n 10 notes = %d\n Ruppies = %d\n", amount, count_100, count_10, count_1_ruppies);

        }

	 else if (amount < 100 && amount >= 10)
        {
                count_10 = (amount / 10);
		count_1_ruppies = (amount % 10);
                printf("The total amount of %d has\n 10 notes = %d\n Ruppies = %d\n", amount, count_10, count_1_ruppies);

        }

	else if (amount < 10)
	{
		count_1_ruppies = amount;
		printf("The total amount of %d has\n Ruppies = %d\n", amount, count_1_ruppies);
	}
}
