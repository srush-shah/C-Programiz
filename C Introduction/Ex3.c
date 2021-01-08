#include<stdio.h>

void main()
{
	int a, b, sum;
	
	printf("Enter two integers: ");
	scanf("%d%d",&a,&b);
	
	sum = a + b;
	
	printf("\nThe sum of %d and %d is: %d",a,b,sum);
}
