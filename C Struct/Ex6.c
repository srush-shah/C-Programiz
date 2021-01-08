//Demonstrate the dynamic memory allocation for structure

#include<stdio.h>
#include<stdlib.h>

struct course
{
	int marks;
	char subject[30];
};

void main()
{
	struct course *ptr;
	int i, noOfRecords;
	
	printf("Enter the number of records: ");
	scanf("%d",&noOfRecords);
	
	//memory allocation for noOfRecords structures
	ptr = (struct course *)malloc(noOfRecords * sizeof(struct course));
	for(i=0;i<noOfRecords;i++)
	{
		printf("Enter the name of the subject and marks respectively:\n");
		scanf("%s %d",(ptr+i)->subject,&(ptr+i)->marks);
	}
	
	printf("\nDisplaying Information:\n");
	for(i=0;i<noOfRecords;i++)
	{
		printf("%s\t%d\n",(ptr+i)->subject,(ptr+i)->marks);
	}
}
