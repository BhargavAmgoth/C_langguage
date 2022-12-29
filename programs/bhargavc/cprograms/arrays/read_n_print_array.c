/*******************************************/ /*****************************************************

		212. Write a C program to read and print elements of array. - using recursion.


******************************************/ /*****************************************************/


#include<stdio.h>
void main()
{
	int i=0, array[5];

	for (i=0; i<5; i++)
	{      // printf("entr \n");
		scanf("%d", &array[i]);
	//	printf("%d", array[i]);

	}
	for(i=0;i<5;i++)
	printf("%d", array[i]);
}
