#include<stdio.h>
void main ()
{
	char cha;

	printf("Entrer the digit:\n");
	scanf("%c", &cha);

	if (cha >= '0' && cha <= '9')
	{
		printf("Entered key %c is a digit\n", cha);
	}
	else 
	{
		printf("Enter the vallid digit\n");
	}
}

