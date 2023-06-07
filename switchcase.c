#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int num1, num2, res;
    char choice;
    clrsrc();
    do
    { 
        printf("1.Addition:\n");
        printf("2.Substraction:\n");
        printf("3.Multipication:\n");
        printf("4.division:\n");
        printf("5.modulas:\n");
        printf("6.Exit:\n");
    
    printf("Enter your choice from (1-6):");
    scanf("%c",&choice);
 

        switch(choice)
        {
            case '1':
            
                printf("Enter the number: \n");
                scanf("%d%d",&num1,&num2);
                res= num1+ num2;
                printf("%d + %d = % d\n",num1,num2,res);
                break;
            
             case '2':
            
                printf("Enter the number: ");
                scanf("%d%d",&num1,&num2);
                res= num1- num2;
                printf("%d - %d = % d\n",num1,num2,res);
                break;
            
             case '3':
            
                printf("Enter the number: ");
                scanf("%d%d",&num1,&num2);
                res= num1* num2;
                printf("%d * %d = % d\n",num1,num2,res);
                break;
            
             case '4':
            
                printf("Enter the number: ");
                scanf("%d%d",&num1,&num2);
                res= num1 / num2;
                printf("%d / %d = % d\n",num1,num2,res);
                break;
            
         case '5':
            
                printf("Enter the number: ");
                scanf("%d%d",&num1,&num2);
                res= num1 % num2;
                printf("%d %% %d = % d\n",num1,num2,res);
                break;
            
           case '6':
           
               printf("Exit from here\n");
               break;
            
           default:
        
               printf("Invalid input!!\n");
               
           
            
        }

    printf("\nloading.....................\n");}
     while (choice!=6 && choice!=getchar());
    
getch();
}