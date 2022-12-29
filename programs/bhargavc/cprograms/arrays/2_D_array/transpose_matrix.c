/*******************************************/ /*****************************************************

		 Write a C program to sum, difference and multiplication of an 2-D array.
					       
********************************************/ /*****************************************************/


#include<stdio.h>
void main()
{
	int A_Matrix[10][10], T_Matrix[10][10], row_size, col_size, i, j;
	
	printf("Enter the size of rows and columns of 2-D array upto size 10\n");
	scanf("%d%d", &row_size, &col_size);


	// Reading and Printing the First Matrix
	printf("Enter the elemnts of an A_Matrix with given range\n");
	for (i=0; i<row_size; i++)
	{
		for (j=0; j<col_size; j++)
		{
			scanf("%d", &A_Matrix[i][j]);
		}
	}
	printf("The elements of A_Matrix\n");
	printf("   { \n");
	for (i=0; i<row_size; i++)
	{
		printf("\t{ ");
		for (j=0; j<col_size; j++)
		{
			printf("%d ", A_Matrix[i][j]);
		}
		printf(" } \n");
	}printf("   }\n");

	//Transpose Matrix
	
	for (i=0; i<row_size; i++)
        {
                for (j=0; j<col_size; j++)
                {
                        T_Matrix[j][i] = A_Matrix[i][j];
		}
	}

        printf("The elements of T_Matrix\n");
        printf("   { \n");
        for (i=0; i<row_size; i++)
        {
                printf("\t{ ");
                for (j=0; j<col_size; j++)
                {
                        printf("%d ", T_Matrix[i][j]);
                }
                printf(" } \n");
        }printf("   }\n");




}
	

