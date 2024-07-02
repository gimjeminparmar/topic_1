#include<stdio.h>

main()
{
	float matshmarks, englishmarks,  sciencemarks, average;
	
	printf("enter mathsmarks (out of 100)");
	scanf("%f",&matshmarks);
	printf("enter englishmarks (out of 100)");
	scanf("%f",&englishmarks);
	printf("enter sciencemarks (out of 100)");
	scanf("%f",&sciencemarks);
	
	average = ( matshmarks + englishmarks + sciencemarks ) / 3;
	
	printf("average marks : %2f/n",average);
}
