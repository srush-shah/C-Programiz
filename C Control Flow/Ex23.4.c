//Program to print pyramids and patterns

// Example 4: Inverted half pyramid of *

#include<stdio.h>

void main()
{
	int i,j,rows;
	printf("Enter the number of rows: ");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		for(j=rows;j>=i;j--)
		{
			printf("* ",j);
		}
		printf("\n");
	}
}
