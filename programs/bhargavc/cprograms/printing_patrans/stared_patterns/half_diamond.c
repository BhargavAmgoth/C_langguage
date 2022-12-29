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
        
                        201. Half Dimond

**************************************************/ /*********************************************************/

#include<stdio.h>
void main()
{
	int row, col, i, j, k;

	printf("Enter number of rows and columns\n");
	scanf("%d%d", &row,&col);

	for (i=1; i<=row; i++)
	{
		for (j=1; j<=col; j++)
		{
			if (j<=i)
			{
				printf("* ");
			}
		//	else
		//	{
		 //  		printf("  ");
		//	}

		}
		printf("\n");
	}

	for (i=1; i<=row; i++)
        {

		for (k=col-1; k>=1; k--)
                {
                        if (k>=i)
                        {
                                printf("* ");
                        }
                  //      else
                        {
                    //            printf("  ");
                        }
		}
		printf("\n");
	}

}
