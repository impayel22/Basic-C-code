#include<stdio.h>
struct vector
{
    int x;
    int y;
};

 struct vector sumVector(struct vector v1, struct vector v2)
{
     struct vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;

    return result;
}

int main()
{
    struct vector v1, v2, sum;

    v1.x=20;
    v1.y=30;
    printf("The value of x dimension is :%d\nThe value of y dimension is :%d\n",v1.x,v1.y);

    v2.x=25;
    v2.y=35;

   printf("The value of x dimension is :%d\nThe value of y dimension is :%d\n",v2.x,v2.y);
   
    sum = sumVector(v1,v2);
    printf("The sum of x dimension is :%d\nThe sum of y dimension is :%d\n",sum.x,sum.y);
    
    return 0;
}