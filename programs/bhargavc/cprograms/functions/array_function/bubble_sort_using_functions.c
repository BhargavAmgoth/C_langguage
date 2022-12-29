/******************************************************/ /*********************************************************

	Write a c program to find bubble sort in assending order using functions.

*******************************************************/ /*******************************************************/

#include<stdio.h>
void bubble_sort_ascending_order(int, int []);
void bubble_sort_descending_order(int, int []);
void main()
{
	int  array[100], size, i;

	printf("Enter the size of the array upto 100 only\n");
	scanf("%d", &size);

	printf("Enter the elements of the array according to given size\n");

	for (i=0; i<size; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("The elements of the array are:\n{ ");
        for (i=0; i<size; i++)
        {
               printf("%d ", array[i]);
        }
	printf("}\n");


	bubble_sort_ascending_order(size, array);
	bubble_sort_descending_order(size, array);

}

void bubble_sort_ascending_order(int size, int array[])
{
	int i, j, temp;

	for (j=0; j<size-1; j++)
	{
		for (i=0; i<size-1; i++)
		{
			if(array[i]>array[i+1])
			{
				temp = array[i+1];
				array[i+1] = array[i];
				array[i] = temp;
			}
		}
	}
	
	printf("The Bubble sort in ascending order ius:\n{ ");
	for (i=0; i<size; i++)
	{
		printf("%d ", array[i]);
	}
	printf("}\n");
}

void bubble_sort_descending_order(int size, int array[])
{
        int i, j, temp;

        for (j=0; j<size-1; j++)
        {
                for (i=0; i<size-1; i++)
                {
                        if(array[i]<array[i+1])
                        {
                                temp = array[i+1];
                                array[i+1] = array[i];
                                array[i] = temp;
                        }
                }
        }

        printf("The Bubble sort in descending order ius:\n{ ");
        for (i=0; i<size; i++)
        {
                printf("%d ", array[i]);
        }
        printf("}\n");
}

