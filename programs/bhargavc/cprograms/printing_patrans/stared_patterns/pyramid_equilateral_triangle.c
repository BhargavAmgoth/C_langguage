/***********************************************/ /***************************************************

        7.9. List of various star pattern series and solution in C programming:

        *
      * * *
    * * * * *	
  * * * * * * *
* * * * * * * *	*
			197. Pyramid equilateral triangle

************************************************/ /*****************************************************/

#include<stdio.h>
void main()
{
	int row,i, j;

	printf("Enter the number rows of a pyramid\n");
	scanf("%d", &row);
	

	for (i=row; i>=1; i--)
	{
		for (j=1; j<=2*row-1; j++)
		{
			if  (i==1)
			{
				printf("* ");
			
			}
			else if(j<=i-1 || 2*row-i<j) 
			{
				printf("  ");
			}
			else
				printf("* ");
		}
		printf("\n");
	}
}
