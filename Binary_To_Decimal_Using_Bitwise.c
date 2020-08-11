#include <stdio.h>

int main()
{
	unsigned int num = 0;
	unsigned char count = 0;
	printf("\nEnter Number: ");
	scanf("%u",&num);
	printf("\n\nBinary for %u is: ",num);
	while(count < 32)
	{
		(num & (0x80000000 >>count))?printf("1"):printf("0");
		++count;
	}
	return 0;
}
