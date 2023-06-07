#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main()
{
    int x=5 , y=6;
    printf("The value of %d and %d before swap",x,y);
    printf("\n");
    //wrong_swap(x,y);    //will not work due to call by value
    swap(&x,&y);        //will work due to call by reference
    printf("The value of %d and %d after swap",x,y);
    return 0;
}
void wrong_swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
void swap(int *a, int *b)
{
int temp;
temp= *a;
*a = *b;
*b =temp; 
}