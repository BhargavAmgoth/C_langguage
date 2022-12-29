/**********************************************/ /*************************************

35. Write a C program to calculate profit or loss.

***********************************************/ /************************************/

#include<stdio.h>
void main()
{
	int Cost_Price, Selling_Price, Difference;

	printf("Enter cost and selling price:\n");
	scanf("%d%d", &Cost_Price, &Selling_Price);

	if (Selling_Price > Cost_Price)
	{
		Difference = Selling_Price - Cost_Price;
		printf("Got %d of Prifit\n", Difference);
	}
	else if (Selling_Price < Cost_Price)
	{
		Difference = Cost_Price - Selling_Price;
		printf("Got %d of loss\n", Difference);
	}
	else
	{
		printf("Either no loss and no profit\n");
	}
}
