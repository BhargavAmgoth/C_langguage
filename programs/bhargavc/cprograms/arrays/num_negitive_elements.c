/*****************************************/ /*************************************

	218. Write a C program to count total number of negative elements in an array.

******************************************/ /**************************************/

#include<stdio.h>
void main()
{
	int array[10], i, j, negative_count=0;

	printf("Enter the 10 Elements in array matrix\n");

	for (i=0; i<10; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("The elements in the array matrix are:\n");
	for (j=0; j<10; j++)
	{
		printf("%d ", array[j]);
		if (array[j] < 0)
		{
			negative_count++;
		}
	}

	printf("The total number of negative elements in an array is: %d\n", negative_count);
}


