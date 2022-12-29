/****************************************/ /*************************************

	219. Write a C program to copy all elements from an array to another array.

****************************************/ /*****************************************/

#include<stdio.h>
void main()
{
	int a[10], b[10], i;

	printf("Enter the elements of a array matrix\n");
	
	for (i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
		b[i] = a[i];
	}
	
	printf("The copyed elements from a array to b array are\n");
	for (i=0; i<10; i++)
	{
	//	b[i] = a[i];
		printf("%d ", b[i]);
	}
}
