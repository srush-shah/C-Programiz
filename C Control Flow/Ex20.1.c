// Check Armstrong number of three digits

#include<stdio.h>

void main()
{
	int num, originalNum, remainder, result = 0;
	printf("Enter a three digit integer: ");
	scanf("%d", &num);
	originalNum = num;
	
	while(originalNum!=0)
	{
		//remainder conatins the last digit
		remainder = originalNum % 10;
		
		result += remainder * remainder * remainder;
		
		// removing last digit from the original number
		originalNum /= 10;
	}
	
	if(result == num)
	{
		printf("%d is an Armstrong number.", num);
	}
	else
	{
		printf("%d is not an Armstrong number.",num);
	}
}
