#include<stdio.h>
void main(void ){
int n1,n2,n3,max1=0;
printf("input the first number :");
scanf("%d",&n1);
printf("input the second  number :");
scanf("%d",&n2);
printf("input the therd number :");
scanf("%d",&n3);
if(n1>n2&&n1>n3){
max1=n1;
 }else if(n2>n1&&n2>n3){
    max1=n2;
    }else max1=n3;
printf("the maximam number =%d",max1);

}
