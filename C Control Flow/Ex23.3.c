//Program to print pyramids and patterns

// Example 3: Half pyramid of alphabets

#include<stdio.h>

void main()
{
	int i,j;
	char input,alphabet='A';
	printf("Enter an uppercase character you want to print in the last row: ");
	scanf("%c",&input);
	for(i=1;i<=(input-'A'+1);i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",alphabet);
		}
		++alphabet;
		printf("\n");
	}
}
