/************************************/ /*******************************

	7.9. List of various star pattern series and solution in C programming:

* * * * *
*       *
*       *
*       *
* * * * *
184.
Hollow Square

***********************************/ /***********************************/

#include<stdio.h>
void main()
{
	int col, row, i, j;

	printf("Enter the number of columns and rows\n");
	scanf("%d%d", &col, &row);

	for (i = 1; i <= col; i++)
	{
		for (j = 1; j <= row; j++)
		{
			if ((i == 1 || i == 5) || (j == 1 || j == 5))
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

