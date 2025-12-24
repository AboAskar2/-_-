#include<stdio.h>
#define max 200
#include<string.h>
 struct student  
{
    char name[50];
    char collge[60];
    int age;
    struct Addres {
    int housno;
    char stretno[40];
    char section[40];
    }a;
} ;

int main(){
    int i,n,choic;
    char sname[50];
   struct student s[max];
    printf("input number of student:");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("enter the name of student (%d)\n",i+1);
        scanf("%s",&s[i].name);
        printf("enter the age of student(%d)\n",i+1);
        scanf("%d",&s[i].age);
        printf("enter the collge of student(%d)\n",i+1);
        scanf("%s",&s[i].collge);
        printf("enter the house number of student (%d)\n",i+1);
        scanf("%d",&s[i].a.housno);
        printf("enter the section of student (%d)\n",i+1);
        scanf("%s",&s[i].a.section);
        printf("_____________________________________________\n");
        }
         while(1){
             printf("Minu\n1-enter number one for search and print ditils student\n 2-enter number two for search and update ditils.\n3-enter number three to Exit.\n");
             printf("______________________________________________________________");
             scanf("%d",&choic);
             if(choic==1){
                printf("enter name of student to search:");
                scanf("%s",&sname);
                int found=0;
                    for ( i = 0; i <n ; i++)
                    {
                        if(strcmp(s[i].name,sname)==0){
                            printf("NAME: (%s)\n",s[i].name);

                            printf("AGE:(%d)\n",s[i].age);

                            printf("collge of student:(%s)\n",s[i].collge);
                            
                            printf("house number(%d)\n",s[i].a.housno);
                        
                            printf("section of student: (%s)\n",s[i].a.section);
                            
                            printf("_____________________________________________\n");
                                found=1;}
                               }
                               if(found==0){printf("!!not found!!");}

                              }else if(choic==2){

                                printf("enter name of student to search:\n");
                                scanf("%s",&sname);
                                printf("\n\n");
                                int found=0;
                                for ( i = 0; i < n; i++){
                               
                                if(strcmp(s[i].name,sname)==0){
                                 printf("enter 1 for age 2 for addres");
                                int no;
                                scanf("%d",no);
                                if(no==1){
                                printf("enter the age of student(%d)\n",i+1);
                                scanf("%d",&s[i].age);} 
                                else if(no==2){
                                 printf("enter the house number of student (%d)\n",i+1);
                                    scanf("%d",&s[i].a.housno);
                                    printf("enter the section of student (%d)\n",i+1);
                                    scanf("%s",&s[i].a.section);
                                }
                                
                            
                                }
                                found=1;
                                }
                                if(found==0){printf("name not found!!\n");}
                                        
                                      }else if(choic==3){break;}

}


 }

    

          