#include<stdio.h>

main()
{
	int a = 12, b = 6;
	printf("addition of %i and %i is %i\n",a,b,a+b);
	printf("subtraction of %i and %i is %i\n",a,b,a-b);
	printf("multiplication of %i and %i is %i\n",a,b,a*b);
	printf("division of %i and %i is %i\n",a,b,a/b);
	printf("modulo of %i and %i is %i\n",a,b,a%b);
	
	printf(" %d + %d = %d\n",a,b,a+b);
	printf(" %d - %d = %d\n",a,b,a-b);
	printf(" %d * %d = %d\n",a,b,a*b);
	printf(" %d / %d = %d\n",a,b,a/b);
	printf(" %d % %%d = %d\n",a,b,a%b);
}