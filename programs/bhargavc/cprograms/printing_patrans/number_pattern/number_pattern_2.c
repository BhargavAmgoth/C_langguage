/***** 7.1. Square number patterns.
 
	11111
	00000
	11111
	00000
	11111

125.Number pattern 2   *****/


#include<stdio.h>
void main()
{
	int row, column, i, j;

	printf("Enter any 2 value\n");
	scanf("%d%d", &row, &column);

	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= column; j++)
		{
			if (i % 2 == 0)
			{
				printf("0 ");
			}
			else
			{
				printf("1 ");
			}
		}
		printf("\n");
	}
}
