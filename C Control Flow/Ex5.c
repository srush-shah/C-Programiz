//Program to check a leap year

#include<stdio.h>

void main()
{
	int year;
	
	printf("Enter a year: ");
	scanf("%d",&year);
	
	//leap year if perfectly divisible by 400
	if(year%400==0)
	{
		printf("%d is a leap year",year);
	}
	
	//not a leap year if divisible by 100 but not divisible by 400
	else if(year%100==0)
	{
		printf("%d is not a leap year",year);
	}
	
	//leap year if divisible by 4 but not by 100
	else if(year%4==0)
	{
		printf("%d is a leap year",year);
	}
	
	//all other years are not
	else
	{
		printf("%d is not a leap year",year);
	}
}
