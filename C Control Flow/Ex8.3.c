//Sum of natural numbers
//Read input until a Positive Integer is entered

#include<stdio.h>

void main()
{
	int n,i,sum=0;
	
	do
	{
		printf("Enter a positive integer: ");
		scanf("%d",&n);
	}while(n<=0);
	
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	
	printf("Sum = %d",sum);
}
