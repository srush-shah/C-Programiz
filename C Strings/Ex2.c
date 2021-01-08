//Program to count vowels, consonants, digits and spaces

#include<stdio.h>

void main()
{
	char line[150];
	int vowels,consonants,digits,spaces;
	int i;
	
	vowels = consonants = digits = spaces = 0;
	
	printf("Enter a line of string: ");
	fgets(line,sizeof(line),stdin);
	
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||
		   line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
		{
			vowels++;
		}
		else if((line[i]>='a' && line[i]<='z')||(line[i]>='A' && line[i]<='Z'))
		{
			consonants++;
		}
		else if(line[i]>='0' && line[i]<='9')
		{
			digits++;
		}
		else if(line[i]==' ')
		{
			spaces++;
		}
	}
	
	printf("Vowels: %d",vowels);
	printf("\nConsonants: %d",consonants);
	printf("\nDigits: %d",digits);
	printf("\nSpaces: %d",spaces);
}
