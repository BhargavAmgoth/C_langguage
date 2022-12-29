/****************************************************/ /***************************************************
							 
	217.  Write a C program to count total number of even and odd elements in an array.

******************************************************/ /**************************************************/

#include<stdio.h>
void main()
{
	int array[10], i, even_count=0, odd_count=0;

	printf("The size of the array is 10\n");

	for (i=0; i<10; i++)
	{
		scanf("%d", &array[i]);
	}

	for (i=0; i<10; i++)
	{
		if (array[i] % 2 == 0)
		{
			even_count ++;
		}
		else
		{
			odd_count++;
		}
	}
	printf("The total even elements in array is: %d\nThe total number of odd elements in array is: %d\n", even_count, odd_count);
}
