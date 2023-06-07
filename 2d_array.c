#include<stdio.h>
int main()
{
    int students= 3;
    int subjects= 6;
    int i, j;

    int marks[3][6];
    for(i=0; i<students; i++)
    {
        for(j=0; j<subjects; j++)
        {
            printf("Enter the marks of the student %d for subject %d: ", i+1,j+1);
            scanf("%d", &marks[i][j]);
        }
    }

    for(i=0; i<students; i++)
    {
        for(j=0; j<subjects; j++)
        {
            printf("The marks of the student %d for %d is %d: ", i+1,j+1, marks[i][j]);
            
        }
    }
    return 0;

}