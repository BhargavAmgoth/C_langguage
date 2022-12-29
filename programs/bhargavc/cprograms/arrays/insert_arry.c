/**********************/ /*****************************
	  220. Write a C program to insert an element in an array.

**********************/ /*********************************/

#include<stdio.h>
void main()
{
	int a[10], size, i, j, num, position;

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
	printf("Enter the number you want to insert\n");
	scanf("%d",  &num);

	printf("Enter the position you want to insert\n");
        scanf("%d",  &position);

	if (position > size)
	{
		printf("Givin position is not vallid, position should be upto the size\n");
	}
	else
	{
		for(i=0; i>position; i--)
		{
			a[i] = a[i-1];
		}
		a[position-1] = num;
	}
	printf("After the inserting the element in arry:\n{");

	for (i=0; i<size; i++)
	{
		printf(" %d", a[i]);
	}
	printf(" }\n");
}


        

