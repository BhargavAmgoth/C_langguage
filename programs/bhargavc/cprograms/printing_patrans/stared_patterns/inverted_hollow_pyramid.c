/***********************************************/ /***************************************************

        7.9. List of various star pattern series and solution in C programming:

* * * * * * * * *
  *           *
    *       * 
      *   * 
        *
                        200. Hollow Inverted Pyramid equilateral triangle

************************************************/ /*****************************************************/

#include<stdio.h>
void main()
{
	int row, i, j;

	printf("Enter the number of rows of the pyramid\n");
	scanf("%d", &row);

	for (i=1; i<=row; i++)
	{
		for (j=2*row-1; j>=1; j--)
		{
			if (i==1 || j==i || j==2*row-i)
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
