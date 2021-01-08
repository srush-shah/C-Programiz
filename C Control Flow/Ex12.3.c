//Find HCF or GCD of two numbers
//For both positive and negative numbers

#include<stdio.h>

void main()
{
	int n1,n2;
	
	printf("Enter two integers: ");
	scanf("%d %d",&n1,&n2);
	
	//if user enters negative number, sign of the number is changed to positive
	n1 = (n1>0) ? n1 : -n1;
	n2 = (n2>0) ? n2 : -n2;
	
	while(n1!=n2)
	{
		if(n1>n2)
		{
			n1-=n2;
		}
		else
		{
			n2-=n1;
		}
	}
	
	printf("G.C.D. = %d",n1);
}