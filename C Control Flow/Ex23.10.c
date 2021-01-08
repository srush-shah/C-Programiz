//Program to print pyramids and patterns

// Example 10: Floyd's Triangle

#include<stdio.h>

void main()
{
	int rows,i,j,number=1;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",number);
			++number;
		}
		printf("\n");
	}
}
