#include <stdio.h>
#include<string.h>

int main() {

    char str[100];
    int length;
    printf("Enter the input : ");
    
    length = strlen(str);
    gets(str);

    if(str[0] == '/' && str[1] == '/' && str[2] != '/' )
    {
        if (str[length - 2] == '*' && str[length - 1] == '/' && str[0]=='/' && str[1]=='*' )
            {
                printf("\nIt is multi line comment");
                return 0;
            }
            
         printf("\nIt is single line comment");
    }
            
       
       else
       {
           printf("\nThere is no comment in the string");}


    return 0;
}
