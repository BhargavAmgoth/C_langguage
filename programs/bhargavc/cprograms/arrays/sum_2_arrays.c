/**********************8*************************/ /***************************************************

	Write a program to do addition and substraction bettween two arrays and store in another array 


************************************************/ /**************************************************/

#include<stdio.h>
void main ()
{
	int a[10], b[10], sum[10], diff[10], i, size;

	printf("Enter the size of array upto 10\n");
	scanf("%d", &size);
	
	printf("Enter the array elemets:\n");
	for (i=0; i<size; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The elements in a matrix are:\n");
	for (i=0; i<size; i++)
	{
		printf("%d ", a[i]);
	}


	printf("\nEnter the array elemets:\n");
        for (i=0; i<size; i++)
        {
                scanf("%d", &a[i]);
        }
        printf("The elements in b matrix are:\n");
        for (i=0; i<size; i++)
        {
                printf("%d ", b[i]);
        }

	printf("\nThe sum of the elemnts in a and b arrays are:\n");
        for (i=0; i<size; i++)
        {
                sum[i] = a[i] + b[i];
		printf("%d ", sum[i]);
        }

        printf("\nThe difference of the elemnts in a and b arrays are:\n");
        for (i=0; i<size; i++)
        {
        	diff[i] = a[i] - b[i];
		printf("%d", diff[i]);
        }


	printf("\nThe difference of the elemnts in b and a arrays are:\n");
        for (i=0; i<size; i++)
        {
                diff[i] = b[i] - a[i];
                printf("%d ", diff[i]);
        }
}
