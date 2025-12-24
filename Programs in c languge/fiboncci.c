#include <stdio.h>
int fibo(int);
void main(void){
     int no;
     printf("input the number:");
     scanf("%d",&no);
     printf( "%d",fibo(no));
}

int fibo(int no){
    if(no==0){
        return 0;
    }
    if(no==1){
        return 1;
    }
    else return fibo(no-1)+fibo(no-2);  
}