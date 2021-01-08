#include<stdio.h>

void main()
{
	float a,b,mul;
	
	printf("Enter two flaoting point numbers: ");
	scanf("%f%f",&a,&b);
	
	mul = a * b;
	
	printf("\nThe product of %f and %f is: %f",a,b,mul);
}
