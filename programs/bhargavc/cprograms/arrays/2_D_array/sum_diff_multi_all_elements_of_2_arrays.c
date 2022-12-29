/*******************************************/ /*****************************************************

		 Write a C program to sum, difference and multiplication of an 2-D array.
					       
********************************************/ /*****************************************************/


#include<stdio.h>
void main()
{
	int A_Array[10][10], B_Array[10][10], Sum_array[10][10], Diff_array[10][10], Product_array[10][10], row_size, col_size, i, j;
	
	printf("Enter the size of rows and columns of 2-D array upto size 10\n");
	scanf("%d%d", &row_size, &col_size);


	// Reading and Printing the First Array
	printf("Enter the elemnts of an A_array with given range\n");
	for (i=0; i<row_size; i++)
	{
		for (j=0; j<col_size; j++)
		{
			scanf("%d", &A_Array[i][j]);
		}
	}
	printf("The elements of A_arry\n");
	printf("{ ");
	for (i=0; i<row_size; i++)
	{
		printf("{ ");
		for (j=0; j<col_size; j++)
		{
			printf("%d ", A_Array[i][j]);
		}
		printf(" } ");
	}printf("}\n");


	// Reading and Printing the Second Array
	printf("Enter the elemnts of an B_array with given range\n");
        for (i=0; i<row_size; i++)
        {
                for (j=0; j<col_size; j++)
                {
                        scanf("%d", &B_Array[i][j]);
                }
        }
        printf("The elements of B_arry\n");
        printf("{ ");
        for (i=0; i<row_size; i++)
        {
                printf("{ ");
                for (j=0; j<col_size; j++)
                {
                        printf("%d ", B_Array[i][j]);
                }
                printf(" } ");
        }printf("}\n");
	
	// Sum of First and Second Array
	for (i=0; i<row_size; i++)
	{
		for (j=0; j<col_size; j++)
		{
			Sum_array[i][j] = A_Array[i][j] + B_Array[i][j];
		}
	}
	 printf("The Sum of A_array and B_array is:\n");
        printf("{ ");
        for (i=0; i<row_size; i++)
        {
                printf("{ ");
                for (j=0; j<col_size; j++)
                {
                        printf("%d ", Sum_array[i][j]);
                }
                printf(" } ");
        }printf("}\n");



	//Difference of First and Secound Array
	for (i=0; i<row_size; i++)
        {
                for (j=0; j<col_size; j++)
                {
                        Diff_array[i][j] = A_Array[i][j] - B_Array[i][j];
                }
        }
	printf("The Difference of A_array and B_array is:\n");
	printf("{ ");
        for (i=0; i<row_size; i++)
        {
                printf("{ ");
 		for (j=0; j<col_size; j++)
                {
                        printf("%d ", Diff_array[i][j]);
                }
                printf(" } ");
        }printf("}\n");

 

	// Mulitilication of First and Second Array
	for (i=0; i<row_size; i++)
        {
                for (j=0; j<col_size; j++)
                {
                        Product_array[i][j] = A_Array[i][j] * B_Array[i][j];
                }
        }
	printf("The Product of A_array and B_array is:\n");
        printf("{ ");
        for (i=0; i<row_size; i++)
        {
                printf("{ ");
                for (j=0; j<col_size; j++)
                {
                        printf("%d ", Product_array[i][j]);
                }
                printf(" } ");
        }printf("}\n");

}
