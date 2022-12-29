//#include<stdio.h>
//void main()
//{

	/***** Third angle for triangle *******/

	/*************
	int a,b,c;
	printf("Enter the angles of triangles:\n");
	scanf("%d%d",&a,&b);
	c = 180 - a - b;
	printf("The third angle of triangle:%d\n", c);
	***************/
	
	/***** area of triangle with base and height *****/

	/***********
	int base, height, area;
	printf("Enter the base and height:\n");
	scanf("%d%d",&base,&height);

	area = (base * height) / 2;
	printf("Area of triangle:%d\n",area);
	***********/
//}
	/******** area of equilateral triangle **********/


#include<stdio.h>
#include<math.h>
void main()
{
	float a,area;
	printf("Enter the side triangle:\n");
	scanf("%f",&a);
	area = (sqrt(3)/4) * (a * a);
	printf("%f",area);
}
