#include<stdio.h>
#include<string.h>
#define MAX 100
int revers( char str[]){
   int l= strlen(str);
        int start=0,end=l-1;
        while (start<end)
        {
            char temp=str[start];
            str[start]=str[end];
            str[end]=temp;
            start++;
            end--;
        }

}
int main(){
   int i,n;
   char str[MAX];
   printf("input the word you need revers:");
   scanf("%s",&str);
   revers(str);
   printf("the word %s",str);
   return 0;

}