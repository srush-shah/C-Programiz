//Swap using a temporary variable
#include<stdio.h>

void main()
{
	double first,second,temp;
	printf("Enter first number: ");
	scanf("%lf",&first);
	printf("Enter second number: ");
	scanf("%lf",&second);
	
	//value of first is assigned to temp
	temp = first;
	
	//value of second is assigned to first
	first = second;
	
	//value of temp (initial value of first) is assigned to second
	second = temp;
	
	printf("\nAfter swapping, firstNumber = %.2lf\n",first);
	printf("\nAfter swapping, secondNumber = %.2lf\n",second);
}
