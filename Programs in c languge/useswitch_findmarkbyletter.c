#include <stdio.h>

void mark(char c){
   char c1=c;
   int f=1;
   while (f==1){
   
       if(c1=='A'||c1=='B'||c1=='C'){
    switch (c1)
         {
    case 'A':
        printf("Excellant job");
        break;
    case'B':  
        printf("Good job");

    case 'c':
         printf("Unsatisfing job");

    case 'D':
         printf("invalid input palse input to A,B,C ");

    default:
          printf("invalid input palse input to A,B,C ");

        break;
    }   
    }else printf ("input valid input:");
       scanf(" %c",&c1);

    }
   



}
void main( void) {
    char c1;
    printf("input the charcter A,B,C,D");
    scanf(" %c",&c1);
    mark( c1);
}