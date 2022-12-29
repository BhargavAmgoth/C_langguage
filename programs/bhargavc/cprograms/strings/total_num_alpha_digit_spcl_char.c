/************************************************/ /***********************************************

	263. Write a C program to find total number of alphabets, digits or special character
in a string.

*************************************************/ /*************************************************/

#include<stdio.h>
void main()
{
	char string_1[10];
       int alpha = 0, digit = 0, spcl_char = 0, i;

	printf("Enter the string\n");

	scanf("%s", string_1);

	for (i=0; string_1[i] != '\0'; i++)
	{
		if ((string_1[i] >= 'A' && string_1[i] <= 'Z') || (string_1[i] >= 'A' && string_1[i] <= 'z'))
		{
			alpha++;
		}
		else if (string_1[i] >= '0' && string_1[i] <= '9')
		{
			digit++;
		}
		
		else 
		{
			spcl_char++;
		}
	}
        printf("The total number of Alphabets in strings: %d\n", alpha);
        printf("The total number of Digits in strings: %d\n", digit);
        printf("The total number of Special Character in strings: %d\n", spcl_char);

}

