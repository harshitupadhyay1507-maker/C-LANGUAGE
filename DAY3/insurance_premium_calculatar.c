#include<stdio.h>
int main(){
    int age;
    printf("Enter age :");
    scanf("%d",&age);
    if(age>45){
        printf("Premium : 3000");
    }
    else if(age<18){
        printf("Premium : 1000");
    }
    else{
        printf("Premium : 2000");
    }

}