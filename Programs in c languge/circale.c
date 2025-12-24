#include<stdio.h>
const float pi=3.14;

float  diameter(float r){
return (r*2);
}

float  circumsnances(float r){
    return (2*pi*r);
}

float  area(float r){
    return( pi*(r*r));
}

int main(void){
float r;
printf("ENTER THE RADIUS:");
scanf("%f",&r);
     diameter(r);
     circumsnances( r);
     area(r);
    printf("the diamaeter =%.3f\n",diameter(r));
    printf("the circumsnances =%.3f\n",circumsnances(r));
    printf("the area =%.3f\n",area(r));
    return 0;

}
