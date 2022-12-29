/**********************************/ /************************

		 7.9. List of various star pattern series and solution in C programming:
    *****
   *****
  *****
 *****
*****
185.
Rhombus

****************************************/ /***************************************/


#include<stdio.h>
void main()
{
	int col, row, j, i, k;

	printf("Enter the number of colums and rows\n");
	//scanf("%d", &n);
	scanf("%d%d", &col, &row);

	for (i = 1; i <= row; i++)
	{
		for (j = col-1; j >= i; j--)
		{
			printf("  ");
		}
		for (k = 1; k <= col; k++)
		{
			printf("* ");
		}
		printf("\n");
		
	}
}
