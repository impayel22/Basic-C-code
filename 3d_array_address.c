#include<stdio.h>
int main()
{
    int i,j,k;
    int arr[3][4][5];
    for( i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            for( k=0; k<5; k++)
            {
                printf("The address of arr[%d][%d][%d] is : %u\n ", i,j,k,&arr[i][j][k]);
            }
        }
    }
    return 0;
}