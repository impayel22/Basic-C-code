#include <stdio.h>
#include <string.h>

void substring(char str2[], char sub[], int l, int m) {
   int k = 0;
   
   while (l <= m) {
      sub[k] = str2[l];
      k++;
      l++;
   }
   sub[k] = '\0';
}

int main() {
   char str[100], sub[100];
   gets(str);
   int length, i ,j, first = -1, last = -1;
   length = strlen(str);
   i = length - 1;

    for(int j = 0 ; j < length ; j++)
    {
        if(str[j] == '"' && first == -1)
        first = j;
        if(str[i] == '"' && last == -1) 
        last = i;
        i--;
        if(first != -1 && last != -1) 
        break;
    }
    if(first != last){
        substring(str, sub, first, last);
    printf("\nThe input contains string :%s", sub);
    } else{
        printf("There is no string");
    }
   
    return 0;
}
