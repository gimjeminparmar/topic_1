#include<stdio.h>

main()
{
	float p,r,n,div;
	
	printf("enter your value p =");
	scanf("%f",&p);
	
	printf("enter your value r =");
	scanf("%f",&r);
	
	printf("enter your value n =");
	scanf("%f",&n);
	
	div = 100/ p * r * n;
	printf("div = %.2f",div);
}