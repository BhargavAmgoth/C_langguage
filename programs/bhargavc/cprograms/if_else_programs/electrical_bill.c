/************************************************************************************/ /************************************************************************************
	38. Write a C program to input electricity unit charges and calculate total electricity bill
according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill

************************************************************************************/ /****************************************************************************************/


#include<stdio.h>
void main()
{
	int Units_consumed, Bill, Charges, Total_Electrical_Bill;

	printf("Enter the number of units consumed by a consumer\n");
	scanf("%d", &Units_consumed);

	if (Units_consumed <= 50)
	{
		Bill = Units_consumed * 0.50;
	}

	else if (Units_consumed <= 150)
	{
		Bill = ((50  * 0.50) + ((Units_consumed - 50) * 0.75));
	}
       
	else if (Units_consumed <= 250)
        {
                Bill = ((50  * 0.50) + (100  * 0.75) + (Units_consumed - 150) * 1.20);
        }

	else if (Units_consumed > 250)
        {
                Bill = ((50  * 0.50) + (100  * 0.75) + (100 * 1.20) + (Units_consumed - 250) * 1.50);
        }
	
	Charges = Bill * 0.2;
	Total_Electrical_Bill = Bill + Charges;
	printf("The total electrical bill is: %d\n",Total_Electrical_Bill);
}
