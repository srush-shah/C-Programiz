//Program to find the transpose of a matrix

#include<stdio.h>

void main()
{
	int a[10][10],transpose[10][10],r,c,i,j;
	printf("Enter rows and columns: ");
	scanf("%d %d",&r,&c);
	
	//Assigning elements to the matrix
	printf("\nEnter matrix elements: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	
	//Displaying the matrix a[][]
	printf("\nEntered matrix: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",&a[i][j]);
			if(j==c-1)
			{
				printf("\n");
			}
		}
	}
}
