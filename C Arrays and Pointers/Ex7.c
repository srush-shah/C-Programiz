//Access array elements using pointers

#include<stdio.h>

void main()
{
	int data[5],i;
	
	printf("Enter elements: ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&data[i]);
	}
	
	printf("You entered:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",*(data + i));
	}
}
