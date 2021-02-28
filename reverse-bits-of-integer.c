#include<stdio.h>
#define NO_OF_BITS 32

unsigned int reverseBits(unsigned int num)
{
    for (int i = 0; i < NO_OF_BITS / 2; i++)
    {
        if ((num & (1 << ((NO_OF_BITS - 1) - i))) != (num & (1 << i)))
        {
            num ^= (1 << ((NO_OF_BITS - 1) - i));
            num ^= (1 << i);
        }
    }
    return num;
}


int main()
{
    unsigned int x = 13;
    printf("%x\n", reverseBits(x));
    return 0;
}
