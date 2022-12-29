/*************************/ /***************************
     * * * * *
    *       *
   *       *
  *       *
 *       *
* * * * * 
186.
Hollow Rhombus

*************************/ /****************************/

#include<stdio.h>
void main()
{
	int row, col, i, j, k;

	printf("Enter the number of rows and colums\n");
	scanf("%d%d", &row, &col);

	for (i=1; i<=row; i++)
	{
		for (j=col-1; j>=i; j--)
		{
			printf("  ");
		}
		for (k=1; k<=col; k++)
		{
			if (k == 1 || k == col || i == 1 || i == row)
			{
				printf("* ");
			}
			else 
				printf("  ");
		}
		printf("\n");
	}
}
