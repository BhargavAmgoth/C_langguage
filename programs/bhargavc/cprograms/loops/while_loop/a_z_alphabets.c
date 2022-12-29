/*********************************************/ /**********************************************
 
  53. Write a C program to print all alphabets from a to z. - using while loop53. Write a C program to print all alphabets from a to z. - using while loop

********************************************/ /************************************************/

#include<stdio.h>
void main()
{
	char ch1, ch2;
		
//	getchar();

	printf("Enter any charecters\n");

	scanf("%c", &ch1);	


	{
		while (ch1 <= 'z')
		{
			printf("%c\t", ch1);
			++ch1;
		}
	}
}
