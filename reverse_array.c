#include<stdio.h>
void reverse(int *arr, int n)
{
    int i;
    int temp;
    for(i=0; i<(n/2); i++)
    {
        temp= arr[i];
        arr[i]= arr[n-i-1];
        arr[n-i-1]= temp;
        
    }
}
int main()
{
    int i;
    int arr[]={1,3,6,7,8};
    reverse(arr, 5);
    for(i=0; i<5; i++)
    {
       printf("The element of %d is %d \n", i,arr[i]);
    }
    return 0;
}