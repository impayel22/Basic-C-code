#include<stdio.h>

void printarray(int *ptr, int n)
{
    int i;
    for(i=0; i<n; i++)
    {
    printf("Enter the value of %d is %d \n", i+1, *(ptr+i));
    }
}
int main()
{
    int arr[]={10,20,3,40,50};
    printarray(arr,5);
    return 0;
}