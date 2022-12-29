/***************************/ /****************************

	66. Write a C program to calculate product of digits of any number.

****************************/ /****************************/


#include<stdio.h>
void main()
{
        int num, m, product;

        printf("Enter any number\n");
        scanf("%d", &num);

        product = 1;

        while (num > 0)
        {
                m = num % 10;
                product *= m;
                num = num/10;
                printf("digits %d\n", m);
        }
        printf("%d is sum of all digits\n", product);
}                
