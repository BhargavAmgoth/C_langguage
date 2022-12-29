/*************************************************/ /***********************************************
	
					    
	213. write a C program to print all negative elements in an array.

************************************************/ /***************************************************/

#include<stdio.h>
void main()
{
	int array[10], i;

	for (i=0; i<10; i++)
	{
		scanf("%d", &array[i]);
	}

	for (i=0; i<10; i++)
	{
		if (array[i] < 0)
		{
			printf("%d, ", array[i]);
		}
	}
}
