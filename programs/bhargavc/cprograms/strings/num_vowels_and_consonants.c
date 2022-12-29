/*****************************************/ /*********************************************

	264. Write a C program to count total number of vowels and consonants in a string.

*****************************************/ /**********************************************/

#include<stdio.h>
void main()
{
	char string_1[10];

	int vowels=0, consonants=0, i=0;

	printf("Enter the string\n");

	scanf("%s", string_1);

	for(i=0;string_1[i]!='\0';i++)
	{
//		if((string_1[i]>='a'&& string_1[i]<='z')||(string_1[i]>='A'&&string_1[i]<='Z'))
//		{
		     if (string_1[i] == 'A' || string_1[i] == 'E' || string_1[i] == 'I' || string_1[i] == 'O' || string_1[i] == 'U' || string_1[i] == 'a' || string_1[i] == 'e' || string_1[i] == 'i' || string_1[i] == 'o' || string_1[i] == 'u')
		     {
			     vowels++; 
		     }
		     else
		     { 
			consonants++;
		     }
	
//		}
	}
	printf("The givin string has %d of vowels\n", vowels);
        printf("The givin string has %d of consonants\n", consonants);
}
