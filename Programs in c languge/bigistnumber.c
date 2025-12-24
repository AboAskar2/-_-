#include <stdio.h>
void main(void){
    int new1,n=0,i;
    for (i = 0; i < 10; i++)
    {
        printf("input the number:");
        scanf("%d",&new1);
        if(new1>n){n=new1;}
        printf("the %d bigist\n ",n);
    }
    
}