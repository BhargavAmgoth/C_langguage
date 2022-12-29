/*********************************************************/ /*****************************************************************

7.9. List of various star pattern series and solution in C programming:


            *
	   ***
 	  *****
	 *******
	*********
	 *******			
	  *****
	   ***
	    *

*****************************************************/ /*********************************************************************/

#include<stdio.h>
void main()
{
	int row, i, j;

	printf("Enter the number\n");
	scanf("%d", &row);

	for (i=row; i>=1; i--)
	{
		for (j=1; j<=2*row-1; j++)
		{
			if (i>j || j>=2*row-(i) || i==row)
			{
				printf("  ");
			}
			else// if ( i  )
			{
				printf("* ");
			}
		}
		printf("\n");
	}

	for (i=row-1; i>=1; i--)
        {
                for (j=1; j<=2*row-1; j++)
                {
                        if (i>j || j>=2*row-(i-1) || i==row)
                        {
                                printf("* ");
                        }
                        else// if ( i  )
                        {
                                printf("  ");
                        }
                }
                printf("\n");
        }

}
