// Program to Convert Octal to Binary

#include<stdio.h>
#include<math.h>

long long convert(int oct);

void main()
{
	int oct;
	
	printf("Enter an octal number: ");
	scanf("%d",&oct);
	
	printf("%d in octal = %lld in binary",oct,convert(oct));
}

long long convert(int oct)
{
	int dec=0,i=0;
	long long bin = 0;
	
	//converting octal to decimal
	while(oct!=0)
	{
		dec += (oct % 10) * pow(8,i);
		++i;
		oct /= 10;
	}
	
	//converting decimal to binary
	i = 1;
	while(dec!=0)
	{
		bin += (dec % 2) * i;
		dec /= 2;
		i *= 10;
	}
	
	return bin;
}
