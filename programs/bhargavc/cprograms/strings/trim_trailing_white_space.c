/*************************************************/ /*******************************************

	294. Write a C program to trim trailing white space characters in a string.

**************************************************/ /********************************************/
/**
#include<stdio.h>
#define SIZE 100
void main()
{
	char string_1[SIZE];
	int i, j, k, str_len, count=0;

	printf("Enter the string\n");
	gets(string_1);

	for(i=0; string_1[i] != '\0'; i++);
	str_len = i-1;

	while(string_1[str_len] == ' ')
	{
		for(i=str_len; i>=0; i--)
		{
			string_1[i] = string_1[i-1];
		}
		str_len--;
	}
	printf("%s\n", string_1);
}
***/


#include <stdio.h>
#define MAX_SIZE 100 

int main()
{
    char str[MAX_SIZE];
    printf("Enter any string: ");
    gets(str);

    printf("\nString before trimming trailing white space: \n'%s'", str);

    int index, i;
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
