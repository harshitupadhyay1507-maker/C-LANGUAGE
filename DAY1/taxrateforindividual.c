#include<stdio.h>
int main(){
    int income,tax;
    scanf("%d",&income);
    if(income<=25000){
tax =income*(10/100);
    }
    else if(income<=50000){
        tax=income*(20/100);
    }
    else if(income<=100000){
        tax=income*(30/100);
        else{
            tax = income*(40/100);
        }
    }
}