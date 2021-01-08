#include<stdio.h>

void main()
{
	int a,b,quo,rem;
	
	printf("Enter two integers: ");
	scanf("%d%d",&a,&b);
	
	quo = a/b;
	rem = a%b;
	
	printf("\nThe quotient and remainder of %d and %d are: %d & %d",a,b,quo,rem);
}
