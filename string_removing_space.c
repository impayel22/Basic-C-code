#include<stdio.h>
#include<string.h>
int main() {
   char str[100];
   int i, j, length;
   printf("Enter the line with extra spaces: ");
   gets(str);

   length = strlen(str);
   for(i=0; i<length; i++) {
      if(str[0]==' ') {
         for(i=0; i<(length-1); i++)
         str[i] = str[i+1];
         str[i] = '\0';
         length--;
         i = -1;
         continue;
      }
      if(str[i]==' ' && str[i+1]==' ') {
         for(j=i; j<(length-1); j++) {
            str[j] = str[j+1];
         }
         str[j] = '\0';
         length--;
         i--;
      }
   }
   
      
   printf("\nNew String after removing extra spaces is = %s", str);
   getch();

}