#include<stdio.h>
#include<string.h>
int main()
 {


    char str[100];
    int length;
    printf("Enter the input string:   ");

     gets(str);
     length=strlen(str);

     if(str[0]=='"'&& str[length-1=='"'])
     {
         printf("\nThis is a string");
     }
         else
         {
              printf("\nThis is not string");

         }

return 0;
     }

