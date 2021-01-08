//Calculate power of a number
//Using pow() function

#include<stdio.h>
#include<math.h>

void main()
{
	double base,exp,result;
	
	printf("Enter a base number: ");
	scanf("%lf",&base);
	printf("Enter an exponent: ");
	scanf("%lf",&exp);
	
	//Calculates the power
	result = pow(base,exp);
	
	printf("%.1lf^%.1lf = %.2lf",base,exp,result);
}
