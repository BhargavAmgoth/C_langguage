/*******************************************/ /*****************************************************

		 Write a C program to sum, difference and multiplication of an 2-D array.
					       
********************************************/ /*****************************************************/


#include<stdio.h>
void main()
{
	int array[10][10], row_size, col_size, i, j, sum=0, diff=0, multi=1;
	
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
	}printf("}\n");


	for (i=0; i<row_size; i++)
	{
		for (j=0; j<col_size; j++)
		{
			sum += array[i][j];
		}
	}

	printf("The sum of all the elements of 2-D array is: %d\n", sum);

	for (i=0; i<row_size; i++)
        {
                for (j=0; j<col_size; j++)
                {
                        diff -= array[i][j];
                }
        }

        printf("The difference of all the elements of 2-D array is: %d\n", diff);
	
	for (i=0; i<row_size; i++)
        {
                for (j=0; j<col_size; j++)
                {
                        multi *= array[i][j];
                }
        }

        printf("The multiplication of all the elements of 2-D array is: %d\n", multi);

}

