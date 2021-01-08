//Program to swap elements using call by reference

#include<stdio.h>

void cyclicSwap(int *a,int *b,int *c);

void main()
{
	int a,b,c;
	
	printf("Enter a, b and c respectively: ");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("Value before swapping:\n");
	printf("a = %d \nb = %d \nc = %d",a,b,c);
	
	cyclicSwap(&a,&b,&c);
	
	printf("\nValue after swapping:\n");
	printf("a = %d \nb= %d \nc= %d",a,b,c);
}

void cyclicSwap(int *n1,int *n2,int *n3)
{
	int temp;
	
	//swapping in cyclic order
	temp = *n2;
	*n2 = *n1;
	*n1 = *n3;
	*n3 = temp;
}
