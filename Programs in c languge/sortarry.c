#include<stdio.h>
void main(void){
    int n=9;
int max=0,i,j,temp;
int arry[]={12,14,1,0,33,-14,140,20,70};  

printf("the arry befor sorting \n[");
    for(i=0;i<n;i++){
        printf("%d,",arry[i]);
    }
    printf("]");

 for ( i = 0; i < n - 1; i++) {
        for ( j = 0; j < n - i - 1; j++) {
            if (arry[j] > arry[j + 1]) {
                int temp = arry[j];
                arry[j] = arry[j + 1];
                arry[j + 1] = temp;
            }
        }
    }
    printf("\narry after sorting\n[");
    for(i=0;i<n;i++){
        printf("%d,",arry[i]);
    }
    printf("]");
}


