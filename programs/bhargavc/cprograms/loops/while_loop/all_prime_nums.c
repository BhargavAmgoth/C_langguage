/*******************************************/ /********************************************

	80. Write a C program to print all Prime numbers between 1 to n.

********************************************/ /********************************************/


#include<stdio.h>
void main ()
{
	int N, Number = 2, i, count;

	printf("Enter any vlaue\n");
	scanf("%d", &N);

	while (Number <= N)
	{
		count = 0;
		i = 2;
		while (i <= Number/2)
		{
			if (Number % i == 0)
			{
				count++;
				break;
			}

			i++;
		}
		if (count == 0)
		{
			printf("%d\n", Number);
		}

		Number++;
	}
}
