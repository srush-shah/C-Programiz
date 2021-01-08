// Program to Convert Octal to Decimal

#include<stdio.h>
#include<math.h>

long long convertOctaltoDecimal(int octalNumber);

void main()
{
	int octalNumber;
	
	printf("Enter an octal number: ");
	scanf("%d",&octalNumber);
	
	printf("%d in octal = %lld in decimal",octalNumber,convertOctaltoDecimal(octalNumber));
}

long long convertOctaltoDecimal(int octalNumber)
{
	int decimalNumber=0,i=0;
	
	while(octalNumber!=0)
	{
		decimalNumber += (octalNumber % 10) * pow(8,i);
		++i;
		octalNumber /= 10;
	}
	
	return decimalNumber;
}
