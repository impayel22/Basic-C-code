#include<stdio.h>
int main()
{
    int LSB;
    scanf("%d",& LSB);
    if(LSB & 1 ==1)
    {
        printf("LSB is set");
    
    }
    else 
    printf(" LSB is unset");
    
    return 0;
}