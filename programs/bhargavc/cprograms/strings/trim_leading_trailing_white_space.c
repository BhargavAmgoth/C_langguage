/***********************************************/ /**************************************

	295. Write a C program to trim both trailing white space characters in a string.

*************************************************/ /*************************************/


#include<stdio.h>
#include<string.h>
#define SIZE 100
void main()
{
	char str[SIZE];

	int i, j, index;

	printf("Enter the string\n");
	gets(str);
	
	printf("\n\nString before trimming leading white spaces: \n'%s'", str);
	while(str[i] == ' ')
	{
		for(j=0; str[j] != '\0'; j++)
		{
			str[j] = str[j+1];
		}
	}

	printf("\n\nString after trimming leading white spaces: \n'%s'\n", str);
	
	
	printf("\nString before trimming trailing white space: \n'%s'\n", str);

    	index = -1;
    	i = 0;
    	while(str[i] != '\0')
    	{
        	if(str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        	{
        	    index= i;
        	}

        	i++;
    	}


    	str[index + 1] = '\0';

    	printf("\n\nString after trimming trailing white spaces: \n'%s'", str);

}

