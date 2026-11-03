#include<stdio.h>
int main(){
    int income,tax;
    float tax1,tax2,tax3,tax4;
    printf("income : ");
    scanf("%d",&income);
        tax1 =income*(10/100);
        tax2=income*(20/100);
        tax3=income*(30/100);
        tax4=0;

    if(income>=25000){
        printf("Tax :%f",income*(10.0/100));
    }
    else if(income>=5000){
       printf("Tax :%f",income*(20.0/100));
    }
    else if(income>=1000){
        printf("Tax :%f",income*(30.0/100));
    }
    else{printf("Tax :%f",tax4);
       
        }
    
   
   
     return 0;
}