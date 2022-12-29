#include<stdio.h>
void main()
{
	int m, p, c, e, t, total, avg;
        float percentage;

	printf("Enter the subject marks:\n");
	scanf("%d%d%d%d%d",&m,&p,&c,&e,&t);
	total = m+p+c+e+t;
	avg = total/5;
	percentage = (total/500.0)*100;
	printf("Total:%d\nAvg:%d\nPercentage:%f\n",total,avg,percentage);
}
