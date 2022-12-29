/*******************************************/ /*****************************************************

		 Write a C program to read and print elements of array.
					       
********************************************/ /*****************************************************/


#include<stdio.h>
void main()
{
	int array[10][10], row_size, col_size, i, j;
	
	printf("Enter the size of rows and columns of 2-D array upto size 10\n");
	scanf("%d%d", &row_size, &col_size);

	printf("Enter the elemnts of 2_D array with given range\n");
	for (i=0; i<row_size; i++)
	{
		for (j=0; j<col_size; j++)
		{
			scanf("%d", &array[i][j]);
		}
	}

	printf("The elements of 2-D arry\n");
	
	printf("{ ");
	for (i=0; i<row_size; i++)
	{
		printf("{ ");
		for (j=0; j<col_size; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf(" } ");
	}
	printf("}\n");
}
