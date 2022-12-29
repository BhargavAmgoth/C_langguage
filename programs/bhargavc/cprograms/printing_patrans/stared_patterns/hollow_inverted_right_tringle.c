/***********************************************/ /***************************************************

        7.9. List of various star pattern series and solution in C programming:

* * * * *
*     *
*   *
* *
*
191. hollow inverted right triangle

************************************************/ /*****************************************************/

#include<stdio.h>
void main()
{
	int row, i, j;

	printf("Enter the number of the rows");
	scanf("%d", &row);

	for (i=1; i<=row; i++)
	{
		for (j=row; j>=i; j--)
		{
			if (j==i || j==row || i==1)
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
