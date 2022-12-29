/**********************************************************/ /************************************************

	Write a c program to do multiple task addition, substraction, and ,multiplication in 2D array using functions.

**********************************************************/ /*************************************************/


#include<stdio.h>
#include<stdlib.h>
void addition(int [][10],int [][10], int, int);
void subtraction(int[][10],int[][10],int,int);
void multiplication(int[][10],int[][10],int,int);
void performance(void);
void menu(void);
void switch_function(void);
void main()
{
	menu();
}


void menu()
{
	printf("\n\n");
	printf("Addition = '+'\nSubstraction =  '-'\nMultiplication = '*'\n");
	switch_function();
}


void switch_function()
{

	char ope, ch;
	
	printf("Enter 'S' for single operation, or 'M' to perform multiple operation\n");
	scanf("%c",&ch);

	if (ch == 's' || ch == 'S')
	{
		printf("Select any one operations in +, -, * operations\n");
		getchar();
		scanf("%c", &ope);
	}
	else if(ch == 'm' || ch == 'M')
	{
		printf("Enter '#' to perform multiple operationds\n");
		getchar();
		scanf("%c", &ope);
	}
		
// Reading array values 
	
	switch(ope == '+' || ope == '-' || ope == '*' || ope == '#')
	{	
		case 1:
		{
 			int a[10][10],b[10][10],i,j,rows,columns;	

        		printf("enter the rows & columns elements:\n");
        		scanf("%d%d",&rows,&columns);
       			printf("enter the first array element matrix:\n");
     	
			for(i=0; i<rows; i++)
       			{
	       			for(j=0; j<columns; j++)
               			{
					scanf("%d",&a[i][j]);
                		}
        		}
        		printf("enter the second array element matrix:\n");
        		for(i=0; i<rows; i++)
        		{
				for(j=0; j<columns; j++)
                		{
					scanf("%d",&b[i][j]);
                		}
         		}

			do
        		{

             			switch(ope)
             			{
                     		case '+':
			   		{
//				   		printf("ADD\n");
                                   		addition(a, b,rows,columns);
		                   		performance();
                                   		break;
			   		}
                     		case '-':
			   		{
				   		subtraction(a, b, rows, columns);
			    	   		performance();
                                   		break;
			   		}
                     		case '*': 
			   		{
	 			   		multiplication(a,b,rows,columns);
				   		performance();
                             	   		break;
			   		}
		     		case '#':
			   		{
				   	
			       			 addition(a,b,rows,columns);
			       			 subtraction(a,b,rows,columns);
			       			 multiplication(a,b,rows,columns);
			       	   		 performance();
			     	   		 break;
					}
				default :
					        break;
	  	     	       }
			}	while(ope == '+' || ope == '-' || ope == '*');

		}
	
		case 0:
		{
			printf("Entered operation is not available\n");
			performance();
			break;
		}

//		default :
		{
//			break;
		}
	
      	}
}

void performance()
{
	char key;
	printf("Enter Y to perform the operation or enter any key to stop the operation\n");
	getchar();
	scanf("%c", &key);
	getchar();
	
	switch (key == 'y' || key == 'Y')
	{
		case 1:
			{
				menu();
			}
		case 0:
			{
				printf("Thank you bye bye\n");
			        exit(0);	
		
			}
	}
}

void addition(int a[][10], int b[][10], int rows, int columns)
{
	int i, j, c[10][10];

	if (rows == columns)
	{
		for (i=0; i<rows; i++)
		{
			for(j=0; j<columns; j++)
			{
				c[i][j] = a[i][j] + b[i][j];
			}
		}
	
		printf("The addition of the array elemnets are:\n{ \n");
		for(i=0; i<rows; i++)
		{
			for(j=0; j<columns; j++)
                	{
                	        printf("%d ", c[i][j]); 
			}
			printf("\n");
		}
		printf("}\n");

	}
	else
	{
		printf("Given Rows and Columns are not equal, Please Enter maching rows and columns\n");
		performance();
	}
}
void subtraction(int a[][10],int b[][10],int rows,int columns)
{
	int i, j, c[10][10];

        if (rows == columns)
        {
                for (i=0; i<rows; i++)
                {
                        for(j=0; j<columns; j++)
                        {
                                c[i][j] = a[i][j] - b[i][j];
                        }
                }

                printf("The subtraction of the array elemnets are:\n{ \n");
                for(i=0; i<rows; i++)
                {
                        for(j=0; j<columns; j++)
                        {
                                printf("%d ", c[i][j]);
                        }
                        printf("\n");
                }
                printf("}\n");

        }
        else
        {
                printf("Given Rows and Columns are not equal, Please Enter maching rows and columns\n");
                performance();
        }
}
void multiplication(int a[][10],int b[][10],int rows,int columns)
{
	int i,j,m,n,p,q,k,c[10][10],sum;
        m = rows;
	n = columns;
	p = rows;
	q = columns;
        if(n!=p)
        {
                printf("can not multiply\n");
		performance();
        }
        else
        {
                for(i=0;i<m;i++)
                {
                        for(j=0;j<q;j++)
                        {
                                sum=0;
                                for(k=0;k<m;k++)
                                {
                                        sum = sum + a[i][k] * b[k][j];

                                }
                                c[i][j] = sum;
                        }
                }

        }
        printf(" the multiplication matrix are :\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<q;j++)
                {
                        printf("%d\t",c[i][j]);
                }
                printf("\n");
	}
	performance();
}
