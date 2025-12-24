#include<stdio.h>

void main(void){
int y,rem_4,rem_100,rem_400;
printf("input the year:");
scanf("%d",&y);
rem_4=y%4;
rem_100=y%100;
rem_400=y%400;
if(rem_4==0&&rem_100!=0||rem_400==0){
printf("its leap yaer.");}
else {printf("its not aleap year.");}

}