/***********************************************/ /*************************************************

	214. Write a C program to find sum of all array elements.

**********************************************/ /*************************************************/

#include<stdio.h>
void main()
{
	int array[5], i, sum=0;

	printf("The size of array is 5\n");

	for (i=0; i<5; i++)
	{
		scanf("%d", &array[i]);
	}

	for (i=0; i<5; i++)
	{
		printf("%d, ", array[i]);
		sum = sum + array[i];
	}

	printf("\nThe sum of all the array elements is %d\n", sum);
}

