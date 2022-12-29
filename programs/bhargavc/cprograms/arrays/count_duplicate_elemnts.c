/**********************/ /*****************************

	223. Write a C program to count total number of duplicate elements in an array.

**********************/ /*********************************/

#include<stdio.h>
void main()
{
        int a[10],b[10], size, i, j, position, count=0;

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
                for (j=0; j<size; j++)
                {
                        if(i!=j)
                        {
                                if(a[i]==a[j])
                                {
                                        count++;
				//	break;
                                }
                        }
                }
	}
                printf("\nThe number of dublicate values are: %d\n" , count);

}

