/******************************************/ /******************************************

	259. Write a C program to convert lowercase string to uppercase.

	260. Write a C program to convert uppercase string to lowercase.	

******************************************/ /*******************************************/


#include<stdio.h>
//#include<string.h>
void main()
{
	char string_1[27], string_2[27];
	int i, value;
	printf("Enter the string\n");

	scanf("%s", string_1);

	for(i=0; string_1[i] != '\0'; i++)
	{
		if(string_1[i]>=65 && string_1[i]<=90)
		{
			string_2[i] = string_1[i]+32;
		} 
		else
		{
			string_2[i] = string_1[i]-32;
		}
	}


	printf("%s\n" , string_2);

}	
