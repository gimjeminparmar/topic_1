#include<stdio.h>

main()
{
	float r,area;
	
	printf("enter redius of cirele =");
	scanf("%f",&r);
	
	area = 3.14 * r* r;
	printf("area of circle = %.2f",area);
}