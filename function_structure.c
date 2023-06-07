#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
};

void show(struct employee emp)
{
    printf("The code of the employee is: %d\n", emp.code);
    printf("The salary of the employee is: %.2f\n", emp.salary);
    printf("The name of the employee is: %s\n", emp.name);
}
int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr =&e1;
    
    ptr->code =101;
    ptr->salary =100000;
    strcpy(ptr->name,"Payel");
    show(e1);
    return 0;

}