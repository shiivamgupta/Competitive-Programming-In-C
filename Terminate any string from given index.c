#include <stdio.h>
int main()
{
	char str[]="Hello world";
	
	printf("str before terminating: %s\n",str);
	//assign NULL at index 5
	str[5]='\0';
	printf("str after terminating: %s\n",str);
	
	return 0;	
}
