#include<stdio.h>
int main()
{
    int marks[4], i;
    int *ptr;
    ptr= &marks[0];

    for(i=0; i<4; i++)
    {
        printf("Enter the marks of student %d: ", i+1);
        scanf("%d",ptr);
        ptr++;

    }
    for(i=0; i<4; i++)
    {
        printf("The marks of student %d is %d: \n", i+1, marks[i]);}
        return 0;
}