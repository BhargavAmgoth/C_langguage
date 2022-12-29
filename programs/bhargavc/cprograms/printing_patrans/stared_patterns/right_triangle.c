/***************************************************/ /*****************************************************

	7.9. List of various star pattern series and solution in C programming:

	*
	* *
	* * * 
	* * * *
	* * * * *
	
			189. Right triangle

**************************************************/ /*********************************************************/

#include<stdio.h>
void main()
{
	int num, i, j;

	printf("Enter the number of rows\n");
	scanf("%d", &num);

	for (i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
