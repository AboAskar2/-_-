#include<stdio.h>
int numberd(int n){
    if(n==0){
        return 0;
         }
    return (n%10)+numberd(n/10);
}

int main(void){
    int n;
    printf("input the number:");
    scanf("%d",&n);
    numberd(n);
    int no=numberd(n);
    printf("THE NUMBER OF DIGETS IN NUMBER=(%d)",no);
}