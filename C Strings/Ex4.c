//Calculate the length of a string without using strlen() function

#include<stdio.h>

void main()
{
	char s[] = "Programming is fun";
	int i;
	
	for(i=0;s[i]!='\0';i++);
	
	printf("Length of the string: %d",i);
}
