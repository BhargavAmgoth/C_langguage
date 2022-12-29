/*********************************************************/ /****************************************************

		215. Write a C program to find maximum and minimum element in an array.

**********************************************************/ /*****************************************************/

#include<stdio.h>
void main()
{
	int array[10], i, max, min;

	printf("The size ofnarray is 10\n");

	for (i=0; i<10; i++)
	{
		scanf("%d", &array[i]);
	}
	
	max = array[0];
	min = array[0];
	printf("%d", array[0]);
	for (i=0; i<9; i++)
	{
		printf(", %d", array[i+1]);
		if (max < array[i+1])
		{
			max = array[i+1];
		}
		if (min > array[i+1])
		{
			min = array[i+1];
		}
	}
	printf("\nThe minimum value in an array is: %d\nThe maximum value in an array is: %d\n", min, max);
        printf("\nThe minimum value location in an array is: %p\nThe maximum value location in an array is: %p\n", &min, &max);


}
