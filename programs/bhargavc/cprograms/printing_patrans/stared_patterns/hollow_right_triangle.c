/***************************************************/ /*****************************************************

        7.9. List of various star pattern series and solution in C programming:

        *
        * *
        *   *
        *     *
        * * * * *
        
                        190. Hollow Right triangle

**************************************************/ /*********************************************************/

#include<stdio.h>
void main()
{
	int num, i, j;

	printf("Enter the number of rows\n");
	scanf("%d", &num);

	for (i=1; i<=num; i++)
	{
		for (j=1; j<=i; j++)
		{
			if (j==1 || j==i || i==num)
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
