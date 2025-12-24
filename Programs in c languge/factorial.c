#include <stdio.h>
void main(void){
int no,i,f=1;
printf("input number:");
scanf("%d",&no);
for ( i = no; i > 0; i--)
{
 f*=i;   

}
printf("the factorial to %d=%d",no,f);



}