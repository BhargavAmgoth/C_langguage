/****************************************************/ /**************************************************

	216. Write a C program to find second largest element in an array.

*******************************************/ /***************************************************************/
#include<stdio.h>
void main()
{
	int array[10], i, max, second_max;

	printf("The array size 10\n");

	for (i=0; i<10; i++)
	{
		scanf("%d", &array[i]);
	}

	max = array[0];
	

	for (i=0; i<9; i++)
	{
		if (max < array[i+1])
		{
			second_max = max;
			max = array[i+1];
	
		//	if (second_max > array[
		//	{
		//		second_max = array[i+1];
		//	}
		}
	}
	printf("Max %d\n", max);
	printf("Second max %d\n", second_max);
}
