/**********************/ /****************************

	222. Write a C program to print all unique elements in the array.

**********************/ /*********************************/

#include<stdio.h>
void main()
{
	int a[10],b[10], size, i, j, count=0;

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

	
	for (i=0; i<size; i++)
	{
		count=0;
		for (j=0; j<size; j++)
		{
			if(i!=j)
			{
				if(a[i]==a[j])
				{
					count++;
				}
			}
		}
		if(count==0)
		{	
			printf(" %d",a[i]);
		}
	}	
	if (count!=0)
	{
		printf("\nno unique element found\n");
	}

	//rintf("\nThe number of dublicate values are: %d\n" , count);

}
