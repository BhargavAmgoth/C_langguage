/**********************/ /*****************************
	  
	221. Write a C program to delete an element from an array at specified position.

**********************/ /*********************************/

#include<stdio.h>
void main()
{
	int a[10], size, i, position;

	printf("Enter size of the arry upto 10\n");
	scanf("%d", &size);

	printf("Enter the elemets of an arry:\n");
	for(i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
	
	printf("The elements of arry are:\n{");
	for (i=0; i<size; i++)
        {       
                printf(" %d", a[i]);
        }       
	printf(" }\n");
	printf("Enter the position you want to delete\n");
        scanf("%d",  &position);

	if (position > size)
	{
		printf("Givin position is not vallid, position should be upto the size\n");
	}
	else
	{
		for(i=position; i<size-1; i++)
		{
			a[i] = a[i-1];
		}
	}
	printf("After the inserting the element in arry:\n{");

	for (i=0; i<size-1; i++)
	{
		printf(" %d", a[i]);
	}
	printf(" }\n");
}
