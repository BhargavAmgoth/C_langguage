/************************************/ /**************************************************
        
        283. Write a C program to replace all repeated characters with another in a given string.

***************************************/ /********************************************/

#include<stdio.h>
#define SIZE 100
void main()
{
        char string_1[SIZE], ch, replace_ch;
        int i,j, k;

        printf("Enter the string\n");
        gets(string_1);

	printf("Enter the charecter to remove\n");
	scanf("%c", &ch);

	getchar();
	printf("Enetr the replacing charecter\n");
	scanf("%c", &replace_ch);

        for(i=0; string_1[i] != '\0'; i++)
	{
		if (string_1[i] == ch)
                {
     
			string_1[i] = replace_ch;
        
                }
        }

        printf("%s\n", string_1);
}
