#include<stdio.h>

int conv(char str[])
{                      
int i,n;
n=0;
for(int i=0;str[i]>='0'&& str[i]<='9';i++)
n=10*n+( str[i]-'0');
return n;
}

int main()
{
char str[20]={'1','2','0','4','9'};
int ret=conv(str);
printf("%d",ret);
}
