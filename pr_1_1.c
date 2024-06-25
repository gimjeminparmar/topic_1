#include<stdio.h>
/*Q.1 Temperature Converter
Develop a program that converts temperature from degrees Celsius to Fahrenheit using the
formula: °F = (9/5 × °C) + 32
*/
main()
{
	float celsius,fahrenheit;
	printf("enter the temperature in celsius =");
	scanf("%f,",&celsius);
	
	fahrenheit=(celsius*9/5)+32;
	printf("the temperature in fahrenheit : %.2f\n",fahrenheit);
}