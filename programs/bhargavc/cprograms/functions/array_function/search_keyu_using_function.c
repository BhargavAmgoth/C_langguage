/******************************************************/ /*******************************************************************

	Write a c program to find a key from the list using the functions.

******************************************************/ /********************************************************************/

#include<stdio.h>
void search_key(int, int[] ,int);
void main()
{

	int  array[100], size, key, i;

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

	printf("Enter the key element\n");
	scanf("%d", &key);
	
	search_key(size, array, key);

}

void search_key(int size, int array[], int key)
{
	int i, flag;

	for (i=0; i<size; i++)
	{
		if(array[i] == key)
		{
			flag = 1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("Entered key is found in list at the position : %d\n", i+1);
	}
	else
	{

		printf("Entered key is not found in the list\n");
	}
}
