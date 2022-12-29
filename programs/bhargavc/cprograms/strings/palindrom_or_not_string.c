/****************************************/ /***************************************

        267. Write a C program to check whether a string is palindrome or not.

******************************************/ /*************************************/


#include<stdio.h>
void main()
{
        char string_1[10], rev_string[10];
        int i, j, k, str_len=0, count;

        printf("Enter the string\n");

        scanf("%s", string_1);

        for(i=0; string_1[i] != '\0'; i++);


	str_len = i-1;
        
	for (j=0; string_1[j] != '\0'; j++)
        {
                rev_string[str_len] = string_1[j];
                str_len--;
        }
        
	printf("The reverse string is: %s\n", rev_string);
	
	count = 0;
       	for (k=0; string_1[k] != '\0'; k++)
        {
		//count = 0;
                if(string_1[k] != rev_string[k])
                {
                        count++;
                        break;
                }
        }
	//printf("k value is: %d\n", k);


       
       	if (count > 0)
        {
                printf("The given string is not a palindrome\n");
        }
        else
        {
                printf("The given string is palindrome\n");
        }
}
