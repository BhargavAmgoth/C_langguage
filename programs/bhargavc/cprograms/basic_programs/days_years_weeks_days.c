#include<stdio.h>
void main()
{
      	int total_days, years, months, weeks,days;
	printf("Enter the number of days:\n");
	scanf("%d",&total_days);
	years = total_days/365;
	months = (total_days%365) / 30;
	weeks = (months / 7);
        days = (months % 7);
	printf("Number years:%d\nNumber months:%d\nNumber weeks:%d\nNumber days:%d\n",years, months, weeks,days);
}
