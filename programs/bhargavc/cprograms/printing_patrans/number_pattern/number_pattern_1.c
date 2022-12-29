/***** 7.1. Square number patterns

	11111
	11111
	11111
	11111
	11111
	
124.Number pattern 1  *****/


#include<stdio.h>
void main()
{
	int num1, num2, i;
	
	printf("Enter any value\n");
	scanf("%d", &num2);

	for (num1 = 1; num1 <= num2; num1++)
	{
		for (i = 1; i <= num2; i++)
	
		{	
			printf("1");
		
		}
		printf("\n");

	}
}
