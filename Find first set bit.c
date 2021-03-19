#include <stdio.h>
#define BYTE_TO_BINARY_PATTERN "%c%c%c%c%c%c%c%c"
#define BYTE_TO_BINARY(byte)  \
  (byte & 0x80 ? '1' : '0'), \
  (byte & 0x40 ? '1' : '0'), \
  (byte & 0x20 ? '1' : '0'), \
  (byte & 0x10 ? '1' : '0'), \
  (byte & 0x08 ? '1' : '0'), \
  (byte & 0x04 ? '1' : '0'), \
  (byte & 0x02 ? '1' : '0'), \
  (byte & 0x01 ? '1' : '0') 
  
int main()
{
    int n = 18;
    int s = n&n-1;
    int p = n-s;  //rightmost set bit
    printf("Leading text "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(n));
    printf("Leading text "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(s));
    printf("Leading text "BYTE_TO_BINARY_PATTERN, BYTE_TO_BINARY(p));

    return 0;
}
