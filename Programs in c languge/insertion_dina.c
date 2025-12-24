#include<stdio.h>
// this program to dina (my frind in department)
#define MAX_SIZE 100
void insertarry( int arry[] ,int n,int index,int elment){
int i;
if(index<0||index>n){
    printf("invalid index!!! try agen");
}
       // تزحيف العناصر كم نهاية المصوفة 
    for(i=n;i>index;i--){
        arry[i]=arry[i-1];   // تزحيف لحد الاموقع المطلوب اووكف
}

arry[index]=elment; // اجط العنصر بالموقع المطلوب 
//طباعة العناصر 
printf("arry after insert :\n[");
    for(i=0;i<n+1;i++){
    printf("%d ",arry[i]);
    }
    printf("]");
}

int main (void){
int elment ,index,arry[MAX_SIZE],n,i;
printf("Enter size of arry:"); //حجم المصفوفة في الووبات فقط لان حجمها ااصلي كبير 
scanf("%d",&n);
        for(i=0;i<n;i++){
        printf("INPUT THE (%d)ELMENT OF ARRY:\n",i+1);  //ادخال عناصر 
        scanf("%d",&arry[i]);
        }

    printf("Enter index:"); // الموقع الذي تريد ادخال العنصر فيه
    scanf("%d",&index);
    while (index<0||index>n)
    {
         printf("invalid index try again!!\n");  
        printf("Enter index:"); // الموقع الذي تريد ادخال العنصر فيه
        scanf("%d",&index);
    }
    
    printf("Enter elment:"); // العنصر المطلوب
    scanf("%d",&elment);

 printf("arry after insert :\n[");
    for(i=0;i<n+1;i++){
    printf("%d ",arry[i]);
    }
    printf("]");
insertarry( arry,n,index, elment);  // مثود العملية

return 0;

}
