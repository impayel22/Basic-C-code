#include<stdio.h>
void display(int arr[2][3])
{
    int i,j;
    printf("The 2d array is like this:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",arr[i][j]);
            if(i==0 && j==1)
            {
                printf("\n");
            }
            if(i==1 && j==0)
            {
                printf("\n");
            }
        }
    }
}



int main()
{
    int i,j;
    int arr[2][3];
    
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("The value of the array is arr[%d][%d] is: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
    display(arr);
    return 0;
}