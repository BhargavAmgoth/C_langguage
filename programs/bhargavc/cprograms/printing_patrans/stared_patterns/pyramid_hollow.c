/***********************************************/ /***************************************************

        7.9. List of various star pattern series and solution in C programming:

        *
      *   *
    *       *   
  *           *
* * * * * * * * *
                        197. Hollow Pyramid equilateral triangle

************************************************/ /*****************************************************/

#include<stdio.h>
void main()
{
	int row, i, j;

	printf("Enter number of rows of a pyramid\n");
	scanf("%d", &row);

	for (i=row; i>=1; i--)
	{
		for (j=1; j<=2*row-1; j++)
		{
	
			if (i==1 || i==j || j==2*row-i)
			{
				printf("* ");
			}	
			else //if (j==2*row-i+1)
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}
