//Find the largest element in a dynamically alloted memory

#include<stdio.h>
#include<stdlib.h>

void main()
{
	int num,i;
	float *data;
	printf("Enter the total number of elements: ");
	scanf("%d",&num);
	
	//Allcoating memory for num elements
	data = (float *)calloc(num,sizeof(float));
	if(data==NULL)
	{
		printf("Error! Memory not allocated.");
		exit(0);
	}
	
	//Storing numbers entered by the user
	for(i=0;i<num;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%f",data+i);
	}
	
	//Finding the largest number
	for(i=1;i<num;i++)
	{
		if(*data<*(data+i))
		{
			*data = *(data+i);
		}
	}
	
	printf("\nLargest number = %.2f",*data);
}
