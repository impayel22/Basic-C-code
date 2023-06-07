#include<stdio.h>
int main()
{
    FILE *ptr;
    char C;
    ptr= fopen("getcdemo.txt","r");
    C = fgetc(ptr);
    while(C!=EOF)
    {
        printf("%c",C);
        C = fgetc(ptr);
    }

    return 0;
}