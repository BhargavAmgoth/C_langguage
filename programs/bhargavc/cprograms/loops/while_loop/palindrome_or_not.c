/*****************************/ /*******************************

	68. Write a C program to enter any number and check whether the number is palindrome
or not.

*****************************/ /**********************************/

#include<stdio.h>
void main ()
{
        int num, temp, rem, rev;
        printf("enter a number:\n");
        scanf("%d", &num);

        temp = num;
        rev = 0;
        while ( temp > 0)
        {
                rem = temp %10;
                rev = rev *10+ rem;
                temp = temp /10;
        }

        printf("reversed number is = %d\n", rev);

        if ( num == rev )

                printf("\n%d is Palindrome Number.\n", num);
        else

                printf("%d is not the Palindrome Number.\n", num);
}

