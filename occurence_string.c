#include<stdio.h>

int occurence(char st[], char c)
{
    char *ptr=st;
    int count=0;
    while(*ptr!='\0')
    {
        if(*ptr==c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}
int main()
{
    char st[]="Messi";
    printf("Occurence of s is : %d ", count);
    int count = occurence(st,'s');
    return 0;
}