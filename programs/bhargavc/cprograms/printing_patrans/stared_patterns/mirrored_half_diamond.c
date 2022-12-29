/***************************************************/ /*****************************************************

     7.9. List of various star pattern series and solution in C programming:
               
						    
						      
		*
              * * 
	    * * *
	  * * * *
        * * * * *
          * * * *       
	    * * *
              * * 
                *
        
                        202. Mirrored Half Dimond

**************************************************/ /*********************************************************/

#include<stdio.h>
void main()
{
	int row, i, j;

	printf("Enter the number of rows\n");
	scanf("%d", &row);

	for (i=row; i>=1; i--)
	{
		for (j=1; j<=row; j++)
		{
			if (j>=i)
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
	for (i=row-1; i>=1; i--)
        {
                for (j=row; j>=1; j--)
                {
                        if (j<=i)
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
