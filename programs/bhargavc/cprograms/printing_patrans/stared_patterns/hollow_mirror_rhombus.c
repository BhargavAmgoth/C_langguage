/****************************/ /**************************

        7.9. List of various star pattern series and solution in C programming:

* * * * *
  *       *
    *       *
      *       *
        * * * * *


        188. Hollow Mirrored Rhombus

*****************************/ /***********************************/




#include<stdio.h>
void main()
{
 int row, col, i, j, k;

 printf("Enter the number of rows and columns\n");
 scanf("%d%d", &row, &col);

 for (i=1; i <= row; i++)
 {
  for (j=1; j<=i-1; j++)
  {
   printf("  ");
  }
  for (k=1; k<=col; k++)
  {
   if (k==1 || k==col || i==1 || i==row)
   {
    printf("* ");
   }
   else
   {
    printf("  ");
   }
  }
  printf("\n");
 }
}

