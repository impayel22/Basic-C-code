#include<stdio.h>
void encrypt(char *c)
{
    char *ptr =c;
    while(*ptr !='\0')
    {
        *ptr = *ptr+1;
        ptr++;
    }
}
void decrypt(char *c1)
{
    char *ptr =c1;
    while(*ptr !='\0')
    {
        *ptr = *ptr-1;
        ptr++;
    }
}
int main()
{
    char c[]="I love You";
    char c1[]="J!mpwf!Zpv";
    encrypt(c);
    decrypt(c1);
    printf("The encrypt data is : %s\n",c);
    printf("The decrypt data is : %s",c1);
    return 0;

}