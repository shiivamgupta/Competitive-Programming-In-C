#include <stdio.h>

int main()
{
	char str[]="Hello world";
	
	printf("string before terminating: %s\n",str);
	//assign NULL at index 5
	str[5]='\0';
	printf("string after terminating: %s\n",str);
	
	return 0;	
}
