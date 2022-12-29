/* 41. Write a C program to check whether an alphabet is vowel or consonant using switch
case. */


#include<stdio.h>
void main ()
{
	char alphabet;

	printf("Enter the alphabet\n");
	alphabet = getchar();
	
	switch ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z'))
	{
		case 0:
			printf("Entered value is not an alphabet, Enter the vallid alphabet\n");
			break;

		case 1:
			switch (alphabet)
			{
				case 'a':
				case 'e':
				case 'i':
				case 'o':
				case 'u':
					printf("Given alphabet %c is lower case vowel\n",alphabet);
					break;

				case 'A':
				case 'E':
				case 'I':
				case 'O':
				case 'U':
					printf("Given alphabet %c is uppercase vowel\n", alphabet);
					break;
				default:
					printf("Given alphabet %c is a consonant\n", alphabet);
					break;
			}
	}
}
