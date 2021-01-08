// Program to Convert Binary to Octal

#include<stdio.h>
#include<math.h>

int convert(long long bin);

void main()
{
	long long bin;
	
	printf("Enter a binary number: ");
	scanf("%lld",&bin);
	
	printf("%lld in binary = %d in octal",bin,convert(bin));
}

int convert(long long bin)
{
	int oct=0,dec=0,i=0;
	
	//converting binary to decimal
	while(bin!=0)
	{
		dec += (bin % 10) * pow(2,i);
		i++;
		bin /= 10;
	}
	
	i=1;
	
	//convert decimal to octal
	while(dec!=0)
	{
		oct += (dec % 8) * i;
		dec /= 8;
		i *= 10;
	}
	
	return oct;
}
