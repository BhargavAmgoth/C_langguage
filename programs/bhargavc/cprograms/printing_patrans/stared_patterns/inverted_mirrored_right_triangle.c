/***********************************************/ /***************************************************

        7.9. List of various star pattern series and solution in C programming:

* * * * *
  * * * *
    * * *
      * *
        *

	194. inverted mirrored right triangle

************************************************/ /*****************************************************/








#include<stdio.h>
void main()
{
        int row, i, j;

        printf("Enter the number of rows\n");
        scanf("%d", &row);

        for(i=1; i<=row; i++)
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
}

