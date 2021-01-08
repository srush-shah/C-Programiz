//Program to check odd or even using the Ternary Operator

#include<stdio.h>

void main()
{
	int num;
	
	printf("Enter an integer: ");
	scanf("%d",&num);
	
	(num%2==0) ? printf("%d is even",num) : printf("%d is odd",num);
}
