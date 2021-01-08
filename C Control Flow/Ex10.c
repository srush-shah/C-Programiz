//Multi[plication table of a number upto a range

#include<stdio.h>

void main()
{
	int n,i,range;
	
	printf("Enter an integer: ");
	scanf("%d",&n);
	printf("Enter a range: ");
	scanf("%d",&range);
	
	for(i=1;i<=range;i++)
	{
		printf("%d * %d = %d\n",n,range,n*i);
	}
}
