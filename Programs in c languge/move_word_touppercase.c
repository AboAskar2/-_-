#include<stdio.h>
#include<string.h>
#define max 100
int main(){
char st[max];
printf("input word:");
scanf("%s",&st);
int i,
// to stor the length of word to use in loop
l=strlen(st);

for ( i = 0; i < l; i++)
{
   if(st[i]>='a'&& st[i]<='z'){

     // make the latter to uppercase
     st[i]=st[i]-32;

    }
}

printf("%s",st);




}

