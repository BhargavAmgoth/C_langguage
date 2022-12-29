#include<stdio.h>
void main()
{
	char cha;

	printf("Enter the alphabet:\n");
        scanf("%c", &cha);
	
	if ((cha >= 'A' && cha <= 'Z') || (cha >= 'a' && cha <= 'z'))
	{
		if ((cha == 'A' || cha == 'E' || cha == 'I' || cha == 'O' || cha == 'U') || (cha == 'a' || cha == 'e' || cha == 'i' || cha == 'o' || cha  == 'u'))

		{
			printf("Given charecter %c is an voewl\n",cha);
		}
		else 
		{
			printf("Given charecter is an alpbhabet constant\n");
		}
	}
	else 
	{
		printf("Enter the vallid Alphabet charecter\n");
	}
}

