#include<stdio.h>
void main()
{
	int p = 9, q, r;

	q = p = 10;

	r = p < 16;

	printf("p = %d  q = %d  r = %d\n", p, q, r);

        printf("p = %d  q = %d  r = %d\n", p, r, q);
}

