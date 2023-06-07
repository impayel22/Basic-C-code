#include<stdio.h>
#define BITS sizeof(int)*8
 void main()
{
    int num, msb;
    scanf("%d",& num);
    msb= 1 <<(BITS-1);
    if(num & msb)
    {
        printf(" MSB of %d set is 1.", num);

    }
    else 
    {
        printf(" MSB of %d unset is 0.", num);
    }
}
