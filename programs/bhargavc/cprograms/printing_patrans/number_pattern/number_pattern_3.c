/******
 7.1. Square number patterns.

 	01010
	01010
	01010
	01010
	01010

126.Number pattern 3 *******/


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
			printf("%d", !(j%2));
		}
		printf("\n");
	}
}
