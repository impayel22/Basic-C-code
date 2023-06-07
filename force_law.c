#include<stdio.h>
float force(float mass);
int main()
{
    float m;
    printf("Entered mass is: ");
    scanf("%f",&m);
    printf("The force is %.2fN for mass %.2fKg",force(m),m);
    return 0;

}
float force(float mass)
{
    float result= (mass* 9.8);
    return result;
}
