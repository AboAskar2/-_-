#include<stdio.h>
void main(){
    int month;
    char c='y'; 
    
while (c=='y'){
printf("input the number 80 to exit!:");
printf("input the number of month:");
scanf("%d%*c",&month);

switch (month)
{
    case 1:
    case 2:
    case 12:
        printf("Winter");
        break;
        
    case 11:
    case 10:
    case 9:
        printf("Autumn");
        break;
        
    case 8:
    case 7:
    case 6:
        printf("Summer");
        break;
         
    case 3:
    case 4:
    case 5:
        printf("Spring\n ");break;
        
        case 80:

        c='x';
        break;

    default:
        printf("ivaled input");
        break;
         
}
 printf("if you need try aggen input y");
 scanf("%c%*c",&c);
 }
}
