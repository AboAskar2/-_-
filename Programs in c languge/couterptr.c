#include<stdio.h>
#include<string.h>
#define max 200
int  main(){
char str[max],c,*p1,*p2,s;
int count=0,z;
printf(" enter size :");
scanf("%d",&z);
 int start=str[0];
int end=(z-1);
printf("enter the text:");
scanf("%s",&str);


printf("enter charcetr:");
scanf("%c",&s);
while(start<end){
if(*p1==s) {count++;}
*p1++;
*p2++;

}
printf("the count=%d",count);



}