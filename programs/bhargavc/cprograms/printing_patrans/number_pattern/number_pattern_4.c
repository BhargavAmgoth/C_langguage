/**************************************************/ /******************************************

	7.1. Square number patterns

	11111
	10001
	10001
	10001
	11111		127.Number pattern 4

**************************************************/ /*******************************************/

#include<stdio.h>
void main()
{
	int row, col, i, j;

	printf("Enter the number of rows and columns\n");
	scanf("%d%d", &row, &col);

	for (i=1; i<=row; i++)
	{
		for (j=1; j<=col; j++)
		{
			if (i==1 || i==row || j==1 || j==col)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
		}
		printf("\n");
	}
}
