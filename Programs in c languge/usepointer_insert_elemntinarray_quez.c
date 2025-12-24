#include<stdio.h>
#include<strings.h>
#define max 100
//  use pointer in c insert elemnt to array by index
//  was quize in lab of c programing

// insert elemnt to array by index  
void add(int ar[],int idex,int a,int n){
    int j;
    ar[idex]=a;

printf("\n{");
for ( j = 0; j < n; j++)
{
    printf(" %d",ar[j]);
}
printf("}\n");
}

// insert elemnt to array by index   use pointer
void addp( int *p, int idex,int a,int n){
*(p+idex)=a;
int i;printf(" with pointer{");
for ( i = 0; i < n; i++)
{
    printf(" %d",*(p+i));
}
printf("}\n");
}


int main(){
int *p;
int ar[max],n,idex,i,a;
*p=ar;
printf("input the size of arry:");
scanf("%d",&n);

for (i = 0; i < n; i++)
{
    printf("input the elent of arry:");
    scanf("%d",&ar[i]);
}


printf("enter elment to insert:");
scanf("%d",&a);
printf("input the index 1_%d:",n);
scanf("%d",&idex);
printf("{");
for ( i = 0; i < n; i++)
{
    printf(" %d",ar[i]);
}

printf("}");

addp(ar,idex,a,n);

add(ar,idex,a,n);



}