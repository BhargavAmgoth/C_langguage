/*******************************************/ /*****************************************************

		 Write a C program to Swap two matrix of an 2-D array.
					       
   
********************************************/ /*****************************************************/


#include<stdio.h>
void main()
{
	int A_Matrix[10][10], B_Matrix[10][10], Swp_Matrix[10][10], row_size, col_size, i, j;
	
	printf("Enter the size of rows and columns of 2-D array upto size 10\n");
	scanf("%d%d", &row_size, &col_size);


	// Reading and Printing the First Array
	printf("Enter the elemnts of an A_Matrix with given range\n");
	for (i=0; i<row_size; i++)
	{
		for (j=0; j<col_size; j++)
		{
			scanf("%d", &A_Matrix[i][j]);
		}
	}
	printf("The elements of A_arry\n");
	printf("{ ");
	for (i=0; i<row_size; i++)
	{
		printf("{ ");
		for (j=0; j<col_size; j++)
		{
			printf("%d ", A_Matrix[i][j]);
		}
		printf(" } ");
	}printf("}\n");


	// Reading and Printing the Second Array
	printf("Enter the elemnts of an B_Matrix with given range\n");
        for (i=0; i<row_size; i++)
        {
                for (j=0; j<col_size; j++)
                {
                        scanf("%d", &B_Matrix[i][j]);
                }
        }
        printf("The elements of B_arry\n");
        printf("{ ");
        for (i=0; i<row_size; i++)
        {
                printf("{ ");
                for (j=0; j<col_size; j++)
                {
                        printf("%d ", B_Matrix[i][j]);
                }
                printf(" } ");
        }printf("}\n");
	
	// Swaping of First and Second Array
	for (i=0; i<row_size; i++)
	{
		for (j=0; j<col_size; j++)
		{
			Swap_Matrix[i][j] = A_Matrix[i][j];
		       
		       	A_Martix[i][j] = B_Array[i][j];

			B_Matrix[i][j] = Swap_Matrix[i][j];

		}
	}

	printf("The elements of A_arry\n");
        printf("{ ");
        for (i=0; i<row_size; i++)
        {
                printf("{ ");
                for (j=0; j<col_size; j++)
                {
                        printf("%d ", A_Matrix[i][j]);
                }
                printf(" } ");
        }printf("}\n");

	printf("The elements of B_arry\n");
        printf("{ ");
        for (i=0; i<row_size; i++)
        {
                printf("{ ");
                for (j=0; j<col_size; j++)
                {
                        printf("%d ", B_Matrix[i][j]);
                }
                printf(" } ");
        }printf("}\n");

}
