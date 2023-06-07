#include<stdio.h>

void printsumandavg(int a, int b,int *sum, float *avg);
int main()
{
    int c=3, d=4, sum;
    float avg;
    printsumandavg(c, d, &sum, &avg);
    printf("The values of the sum is %d \n",sum);
    printf("The values of the avg is %.2f",avg);
   
    return 0;

}
void printsumandavg(int a, int b,int *sum, float *avg)
{   
    *sum= a+b;
    *avg= *sum/2;
   
}
