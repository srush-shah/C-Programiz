//Check whether a number is even or odd

#include<stdio.h>

void main()
{
	int num;
	
	printf("Enter an integer: ");
	scanf("%d",&num);
	
	//True if num i perfectly divisible by 2
	if(num%2==0)
	{
		printf("%d is even",num);
	}
	else
	{
		printf("%d is odd",num);
	}
}
