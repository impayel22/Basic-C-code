#include<stdio.h>

typedef struct complex{

    int real;
    int complex;
}comp;

void display(comp c)
{
    printf("The value of the real part is :%d\n",c.real);
    printf("The value of the complex part is :%d\n",c.complex);
}

int main()
{
    comp num[5];
    for(int i=0; i<5; i++)
    {
        printf("Enter the real value for %d num: ",i+1);
        scanf("%d", &num[i].real);
        printf("Enter the complex value for %d num: ",i+1);
        scanf("%d", &num[i].complex);
    }
    for(int i=0; i<5; i++)
    {
       display(num[i]);
    }
    return 0;
}