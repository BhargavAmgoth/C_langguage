/************************************************/ /*********************************************

	208. Write a c program to print the X-Star pattern.

    

    *       	    *
      *           *
	*       *
	  *   *
	    *
	  *   *
	*       *
      *           *  
    *               *

***************************************************/ /**************************************************/

#include<stdio.h>
void main()
{
	int num, i, j;

	printf("Enter any number\n");
	scanf("%d", &num);

	for (i=1; i<=2*num-1; i++)
	{
		for(j = 1; j <=2*num-1; j++)
		{
			if(i==j || j==(2*num-i))
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

