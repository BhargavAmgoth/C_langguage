/**********************************************/ /***********************************

	7.1. Square number patterns

	11111
	11111
	11011
	11111
	11111		128.Number pattern 5

**********************************************/ /*****************************************/

#include<stdio.h>
void main()
{
	int row, col, i, j;

	printf("Enter the nuber of rows and columns\n");
	scanf("%d%d", &row, &col);

	for (i=1; i<=row; i++)
	{
		for (j=1; j<=col; j++)
		{
			if (i==(row+1)/2 && j==(col+1)/2)
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
